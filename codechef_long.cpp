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

using vi = vector<int>;
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair



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


/*void sieve()
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

*/

void solve(){

}

int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}

	if(a==0) return b;

	return gcd(a, b%a);
}

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



	int N;
	cin >> N;
	vector<pair<int, int>> customers;
	for (int i = 0; i < N; ++i) {
		int a, b; cin >> a >> b;
		customers.push_back({a, 1});
		customers.push_back({b + 1, -1});
	}

	sort(customers.begin(), customers.end());

	int curr = 0;
	int l = 0;
	vector<long long> pfx(2*N + 1); // prefix sum array
	vector<int> arr(2*N);

	for (int i = 0; i < 2*N; ++i) { // coordinate compression
		if(i == 0) { customers[i].first = 0; }
		else if(customers[i].first > curr) { l++; curr = customers[i].first; } // we move a pointer
		arr[l+1] += customers[i].second;
		// pfx[l+1] += customers[i].second; implementation without arr, merges all interval end and starts here
	}

	for (int i = 1; i < 2*N + 1; ++i) {
		pfx[i] = arr[i] + pfx[i-1];
		// pfx[i] += pfx[i-1]; implementation without arr
	}

	long long ret = 0;

	for (int i = 0; i < 2*N + 1; ++i)
		ret = max(ret, pfx[i]); // find our maximum value
	cout << ret << "\n";

	return 0;
}