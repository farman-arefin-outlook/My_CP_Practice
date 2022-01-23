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



	int n,m;

	cin>>n>>m;

	map<string , string>mp1;
	map<string , int>mp2;
	map<string , int>mp3;

	for(int i=0; i<n; i++){
		string chef, country;

		cin>>chef>>country;

		mp1[chef]=country;
	}

	int chef=0,votes=0;
	for(int i=0; i<m; i++){
		string s;
		cin>>s;
		mp2[s]++;

		mp3[mp1[s]]++;

		chef=max(chef,mp2[s]);
		votes=max(votes,mp3[mp1[s]]);

	}
  for(auto it : mp3){
        if(it.second==votes){
            cout<<it.first<<endl;
            break;
        }
    }
    for(auto it : mp2){
        if(it.second==chef){
            cout<<it.first<<endl;
            break;
        }
    }

	return 0;
}