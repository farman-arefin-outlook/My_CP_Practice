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

	vector<pair<int , int>>customer;

	for(int i=0; i<n; i++){
		int start,end;
		cin>>start>>end;

		customer.push_back({start,1});
		customer.push_back({end,-1});
	}

	sort(customer.begin(), customer.end());

	int sum=0;
	int ans=0;

	for(auto i : customer){
		sum+=i.second;
		ans=max(ans,sum);
	}

	cout<<ans<<'\n';
	return 0;
}