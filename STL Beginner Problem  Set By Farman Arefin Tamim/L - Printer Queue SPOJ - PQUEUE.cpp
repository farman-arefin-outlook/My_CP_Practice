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


	queue<pair<int , int>>q;
	priority_queue<int>pq;

	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>n>>m;

		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			q.push({a,i});
			pq.push(a);
		}

		int count=0;

		while(!q.empty()){
			if(q.front().first==pq.top()){
				count++;
				if(q.front().second==m){
					break;
				}
				q.pop();
				pq.pop();
			}else{
				q.push(q.front());
				q.pop();
			}
		}
		cout<<count<<endl;
		while(!q.empty()) q.pop();
		while(!pq.empty()) pq.pop();
	}

	return 0;
}