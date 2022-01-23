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

	pair<int , int>mypair;

	map<pair<int , int>, string>mp;


	for(int i=1; i<=n; i++){
		string s;
		cin>>mypair.first>>mypair.second;

		cin>>s;
		mp[mypair]=s;
	}

	int t;
	cin>>t;

	while(t--){

		pair<int , int>temp;

		cin>>temp.first>>temp.second;

		cout<<mp[temp]<<endl;
	}

	return 0;
}