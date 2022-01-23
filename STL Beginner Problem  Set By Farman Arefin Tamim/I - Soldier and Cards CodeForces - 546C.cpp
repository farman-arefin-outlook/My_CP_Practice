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


  	int n,k1,k2,deck;
  	cin>>n;

  	queue<int>a;
  	queue<int>b;

  	cin>>k1;

  	while(k1--){
  		cin>>deck;

  		a.push(deck);
  	}

  	cin>>k2;

  	while(k2--){
  		cin>>deck;
  		b.push(deck);
  	}

  	int win=0;

  	int count=0;

  	while(true){
		int first=a.front();
			a.pop();
	  	int second=b.front();
	  		b.pop();

	  		count++;
	  	if(first>second){
	  		a.push(second);
	  		a.push(first);
	  	}else{
	  		b.push(first);
	  		b.push(second);
	  	}

	  	if(a.empty()){
	  		win=2;
	  		break;
	  	}
	  	if(b.empty()){
	  		win=1;
	  		break;
	  	}

  		if(count>106){
  		cout<<-1<<endl;
  		return 0;
		}

  	}
  	cout<<count<<' '<<win<<endl;


	return 0;
}