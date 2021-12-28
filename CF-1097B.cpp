#include <bits/stdc++.h>

using namespace std;


#define IOS ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define forn(i,n) for(int i=0; i<int(n); i++)
#define MX 10000
bool sq[MX+5];

typedef long long int ll;

/*Driver func to sort pair by second elements
bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}

void solve()
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
}




unsigned long long int msb(long long n)
{
    for(int idx=63; idx>=0; idx--)
    {
        if((n & (1ll<<idx))!= 0)
        {
           return (1ll<<idx);
        }
    }
    return 0;
}


bool win(long long n)
{
    if(n==1)
      return false;
    unsigned long long nextStep = ((n&(n-1))==0 ? n>>1 : n-msb(n));

    return win(nextStep);
}

int maxPairProduct(const vector<int>&n)
{
   int result=0;

   for(int i=0; i<n.size(); i++)
   {
      for(int j=i+1; j<n.size(); j++)
      {
         if(n[i]*n[j]>result)
         {
           result=n[i]*n[j];
         }
      }
   }
   return result;
}



vector<int>a(MX), depth(MX,0);
void dfs(int l, int r, int cnt)
{
    //base case
   if (l>r)
   {
   // cout<<"Index"<<' '<<l<<' '<<r<<endl;
    return;
  }
   int mx=0,mx_i=0;
   //find max in a range
   for(int i=l; i<=r; i++)
   {
        if(mx<a[i])
        {
           mx=a[i];
           mx_i=i;
        }
   }
   //fill depth
   cout<<l<<' '<<r<<' '<<cnt<<endl;
   depth[mx_i]=cnt;
   dfs(l,mx_i-1,cnt+1);
   dfs(mx_i+1,r,cnt+1);

}


int lcm(int a, int b)
{
   return (a/(__gcd(a,b)))*b;
}


vector<bool>marked(9000001,true);
vector<long long>primes;

void sieve(int n)
{
  marked[0]=marked[1]=false;
  for(int i=2; i*i<=n; i++)
  {
    if(marked[i])
    {
      for(int j=i*i; j<=n; j+=i)
      {  
        marked[j]=false;
      }
    }
  }
  for(int i=0;i<=n;i++)
  {
    if(marked[i])
    {
      primes.push_back(i);
    }
  }
}*/





int main()

{
    
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    /*int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int freq[26]={0};

    for(int i=0; i<n; i++)
    {
       freq[s[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
       if(freq[i]<k)
       {
          k-=freq[i];
          freq[i]=0;
       }
       else
       {
          freq[i]-=k;
          k=0;
       }
    }
    string res="";
    for(int i=n-1; i>=0; i--)
    {
       if(freq[s[i]-'a']>0)
       {
           res+=s[i];
           freq[s[i]-'a']--;
       }
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;*/

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(c/a)+(d/b)<<endl;
    }

    return 0;
}
