
	int n;
	cin>>n;

	vector<int>v(n);
	vector<int>subset;

	for(int i=0; i<n; i++) cin>>v[i];

	for(int i=1; i<(1<<n); i++){

		for(int j=0; j<n; j++){
			if((i & (1<<j))!=0){
				subset.push_back(v[j]);
			}
		}
		for(auto x : subset) cout<<x<<' ';
	    	cout<<endl;
	    subset.clear();
	}