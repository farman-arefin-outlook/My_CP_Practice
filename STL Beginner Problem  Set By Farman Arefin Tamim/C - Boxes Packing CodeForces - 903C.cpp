#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);


int main()
{   
	
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


  	int n;
  	cin>>n;

  	map<int , int>mp;

  	int ans=0;
  	for(int i=0; i<n; i++){
  		int a;
  		cin>>a;
  		mp[a]++;

  		ans=max(ans,mp[a]);
  	}
  	cout<<ans<<endl;
	return 0;
}