#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);



int main()
{   
	
	// IOS;
	// double memoizedArray[1000001];//Array for Memoization
	// memoizedArray[0] = 0; //Don't do manual log for 0, it will throw an error

	// //Memoizing the array
	// for(int i=1;i<=1000000;i++){
	//   memoizedArray[i] = memoizedArray[i-1] + log(i);
	// }

	// int testCase, base;
	// long digits,n;

	// cin >> testCase;

	// for(int i = 1; i<= testCase; i++){
	//     cin >> n >> base;
	//     //The formula
	//     digits = memoizedArray[n]/log(base) + 1;
	//     cout << "Case " << i << ": " << digits << "\n";
	// }


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
  			cout<<"YES"<<endl;
  		}else{
  			cout<<"NO"<<endl;
  		}
  		mp[s]++;
  	}
	return 0;
}