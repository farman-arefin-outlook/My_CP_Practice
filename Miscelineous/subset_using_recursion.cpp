
int n;
vector<int>v;
vector<int>subset;
void bf(int k){

	if(k==n){

		for(int x : subset) cout<<x<<' '; 
		cout<<"\n";
		return;
	}

	subset.push_back(v[k]);
	bf(k+1);
	subset.pop_back();
	bf(k+1);
}
