#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 10000001
#define pb push_back
const ll mod = 1e9+7;

bool prime[MAXN];

using vi = vector<int>;
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

#define pb push_back

using pi = pair<int,int>;

#define s second
#define mp make_pair



/*template <typename T>inline T BigMod(T base , T power, T MOD){
	
	T ret = 1;
	while(power){
		if(power & 1) ret = (ret*base)%MOD;

		base=(base*base)%MOD;

		power>>=1;
	}
	return ret;
}



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
}  


// custom compartor
bool comp(const pair<int, int>&a , const pair<int, int>&b){
	return a.second<b.second;
}


//Generic Function 
template <typename T> T genericMin(T a, T b){
	return (a<b? a: b);
}


vector<pair<int , int>>v[1005];
bool vis[1005];
int dis[1005];

vector<int>ans;

int mx=0;

void dfs(int node, int dist){
	if(vis[node]==1) return;

	ans.push_back(node);
	vis[node]=1;
	mx=max(mx,dist);
	dis[node]=dist;
	for(auto [u, w] : v[node]){
		dfs(u, dist+w);
	}
	return;
}

void solve(){

	int n;
	cin>>n;


	for(int i=0; i<n; i++) vis[i]=0;

	for(int i=0; i<n-1; i++){
		int x,y,w;

		cin>>x>>y>>w;

		v[x].push_back({y,w});
		v[y].push_back({x,w});
	  }

		dfs(0,0);

		int next_node;

		for(int i=0; i<n; i++){
			if(dis[i]==mx){
				next_node=i;
				break;
			}
		}
		for(int i=0; i<n; i++){
			vis[i]=0;
		}
		mx=0;
		dfs(next_node,0);
		cout<<mx<<endl;		

    return;
}



const int n=200000;

int a[n];

int func(int n){
  int res=0;

  for(int i=0; i<n; i++){
    if(i>0 and i<=n){
      if(a[i]>a[i-1] and a[i]>a[i+1]){
        if(i<=n-3){
          a[i+1]=max(a[i],a[i+2]);
        }else{
          a[n-1]=a[n-2];
        }
        res++;
      }
    }
  }
  return res;
}


//counting sort

vector<int>counting_sort(vector<int>&a,int m){
    int n=a.size();

    vector<int>c(m,0);

    for(int i=0; i<n; i++) c[a[i]]++;

    vector<int>b;

    for(int i=0; i<m; i++){

        for(int j=0; j<c[i]; j++){
            b.push_back(i);
        }
    }
    return b;
}



*/


int main()
{   
	
	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        string s;
        cin>>s;

        bool ok=false;
        for(int i=0; i<(int)s.size(); i++){
            if(s[i]=='a'==s[i+1]=='a' or s[i]=='b'==s[i+1]=='b'){
                 ok=true;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


 	return 0;
}     
