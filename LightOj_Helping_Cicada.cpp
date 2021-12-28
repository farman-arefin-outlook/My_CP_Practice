#include <bits/stdc++.h>

using namespace std;


#define IOS ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define forn(i,n) for(int i=0; i<int(n); i++)
#define MX 10000
bool sq[MX+5];

typedef long long int ll;

//Driver func to sort pair by second elements
bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}

/*void solve()
{
   int n;
   cin>>n;
   vector<string>v(n);
   vector<pair<int,int>>p;
   forn(i,n)
   {
      cin>>v[i];
      forn(j,n)
      {
         if(v[i][j]=='*')
         {
             p.push_back({i,j});
         }
      }
   }
   p.push_back(p[0]);
   p.push_back(p[1]);
   if(p[0].first == p[1].first)
   {
       p[2].first = (p[2].first+1)%n;
       p[3].first = (p[3].first+1)%n;
   }
   if(p[0].second == p[1].second)
   {
      p[2].second = (p[2].second+1)%n;
      p[3].second = (p[3].second+1)%n;
   }
   else
   {
      swap(p[2].first,p[3].first);
   }
   v[p[2].first][p[2].second]='*';
   v[p[3].first][p[3].second]='*';

   forn(i,n)
   {
    cout<<v[i]<<endl;
   }
}*/
/*string Up2Low(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' and s[i]<='Z')
        {
            s[i]=(s[i]-'A')+'a';
        }
    }
    return s;
}*/

int lcm(int a, int b)
{
   return (a/(__gcd(a,b)))*b;
}
int main()

{
    
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

       int n;
       cin>>n;
      // bool flag=false;
       vector<int>v(n);
       for(int i=0; i<n; i++) cin>>v[i];
        bool flag=false;

        for(int i=0; i<=((1<<n)-1); i++)
        {
            int sum=0;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    sum+=v[j];
                    sum=sum%360;
                }
                else
                {
                   sum-=v[j];
                   sum=sum%360;
                }
            }
            if(sum%360==0)
               {
                   flag=true;
               }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;  
    

    return 0;
}
