#include<bits/stdc++.h>

#define int long long int
#define ll long long
using namespace std;
int MOD = 1e9+7;

#define pb push_back


int sum(int a, int b){
  return a+b;
}




int32_t main(){


   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout);
   #endif

    std::ios_base::sync_with_stdio(false);


    //cses 2
    string s;
    cin>>s;

    int best=1;
    int cnt=1;

    for(int i=0; i<(int)s.size(); i++){
        if(s[i]==s[i+1]){
          cnt++;
        }else{
          cnt=1;
        }
        best=max(best,cnt);
    }
    cout<<best<<endl;

    return 0;

}