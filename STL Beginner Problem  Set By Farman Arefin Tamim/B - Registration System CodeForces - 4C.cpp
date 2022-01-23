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

  	map<string , int>mp;

  	while(n--){
  		string s;
  		cin>>s;
  		if(mp[s]){
  			cout<<s<<mp[s]<<endl;
  		}else{
  			cout<<"OK"<<endl;
  		}
  		mp[s]++;
  	}
	return 0;
}