#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 10000001
#define pb push_back
int cnt [ MAXN+1];
const int mod = 1e9+7;

bool prime[MAXN];

using vi = vector<int>;
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair



/*void sieve ()
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

void sieve()
{
	v.pb(2);
	for(ll i=3;i*i<=MAXN;i+=2)
	{
		if(prime[i] == false)
		{
			for(ll j=i*i;j<=MAXN;j+=(2*i))
				prime[j] = true;
		}
	}
	for(ll i=3;i<=MAXN;i+=2) if(prime[i] == false) v.pb(i);

}

ll lm(ll a,ll b)
{
	return (a/__gcd(a,b))*b;
}
ll lcm(vector<ll> v)
{
	ll lc = 1;
	for(int i=0;i<v.size();i++)
	{
		lc = lm(lc,v[i]);
	}
	return lc;
}
ll sum(ll n,ll a,ll b)
{
	if(a % n == 0) return (b/n)-(a/n)+1;
	return (b/n)-(a/n);
}
void solve()
{
   ll c,d,m;
   cin >> c >> d >> m;
   ll a = max(c,d);
   ll b = min (c,d);
   if(a==b) {
	cout<<0<<endl;
	return;
   }

   ll ans = 0;
	ans = m+1;
	b  = a-b;
   int mn = -1;
   vector<ll>str;
	ll tmp  = b;

   for(int i=0;i<v.size() && v[i]*v[i] <= b;i++)
   {
	   if(b%v[i] == 0)
	   {
		   while(b%v[i] == 0)
		   {
			   b /= v[i];
		   }
		   str.pb(v[i]);
	   }
   }
   if(b > 1) str.pb(b);
	 b = tmp;

		int total = 1<<str.size();
   for(int i=1;i<total;i++)
   {
	   vector<ll>res;
			for(int j=0;j<str.size();j++)
			{
				if(i & (1 << j))
				   {
					   res.push_back(str[j]);
				   }
			}

			if(res.size() % 2 != 0)
			{
			  ll lc = lcm(res);
			  if(lc <= a)
			  {
				 ll es = sum(lc,a,a+m);
				 ans -= es;
			  }
			}
			else{
			   ll lc = lcm(res);

			  if(lc <= a)
			  {
				  ll es = sum(lc,a,a+m);

				 ans += es;
			  }
			}
   }
   cout<<ans<<endl;

}


//stringstream 

vector<int>parseInts(string s){
	stringstream ss(s);

	int a;
	char c;
	vector<int>ans;
	while(ss>>a){
		ans.push_back(a);
		ss>>c;
	}
	return ans;
}



void solve(){

}

int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}

	if(a==0) return b;

	return gcd(a, b%a);
}


//Kadane's Algorithm

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


vector<int>v;

long long ans=INT_MAX, sum=0,curr=0;

void bf(int k){

	if(k==n){
		ans=min(ans,abs(sum-2*curr));
		return;
	}

	curr+=v[k];
	bf(k+1);
	curr-=v[k];
	bf(k+1);
}

// sieve of erathosthenes using bitset 

ll _seive_size;

bitset<10000001>bs;

vector<int>primes;

void sieve(ll upperbound){
	_seive_size=upperbound+1;

	bs.set();

	bs[0] = bs[1] = 0;


	for(ll i=2; i<=_seive_size; i++) if(bs[i]){

		for(ll j= i*i ; j<=_seive_size; j+=i) bs[j]=0;
			primes.push_back((int)i);
		}  
}


/// binary search in a optimal way


	int lo = 0;
	int hi = n-1;

	while(hi-lo>1){
		int mid=(hi+lo)/2;

		if(v[mid]<x){
			lo=mid+1;
		}else{
			hi=mid;
	}
}  */

int n;
vector<int>v;

vector<int>ss;


int main()
{   
	
	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif
	


	int n;
	cin>>n;

	vector<pair<int , int>>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i].first>>v[i].second;
	}

	sort(v.begin(), v.end(), [](auto &a, auto &b){
		return a.second < b.second;
	});

	for(int i=0; i<n; i++){
		cout<<v[i].first<<' '<<v[i].second;
		cout<<endl;
	}


	return 0;
}      