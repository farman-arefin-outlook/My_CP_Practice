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


    //cses 4
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int cnt=0;

    for(int i=1; i<n; i++){
      if(v[i]<v[i-1]){
        cnt+=(v[i-1]-v[i]);
        v[i]=v[i-1];
      }
    }
    cout<<cnt<<endl;

    return 0;

}