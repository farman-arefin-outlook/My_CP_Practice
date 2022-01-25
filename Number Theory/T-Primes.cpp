#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 10000001
#define pb push_back
int cnt [ MAXN+1];
const int mod = 1e9+7;
vector <ll> v;
bool prime[MAXN];



void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAXN; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAXN; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAXN; j+=2*i)
                prime[j] = true;
}


int main()
{   
	
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

 	
 	sieve();

 	int n;
 	cin>>n;

 	for(int i=0; i<n; i++){
 		long long int b;
 		cin>>b;

 		long long int ans=sqrt(b);

 		if(!prime[ans] and ans*ans==b){
 			cout<<"YES"<<endl;
 		}else{
 			cout<<"NO"<<endl;
 		}
 	}
	return 0;
}