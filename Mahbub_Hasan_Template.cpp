#include<bits/stdc++.h>

#define ll long long

using namespace std;



// Binary Search

/*ll binary_search(ll ar[],ll n, ll x){

	ll low=0; high=n-1;

	while(low<=high){
		ll mid=low+(high-low)/2;

		if(ar[mid]==x) return mid;

		if(ar[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}

// Lower bound

ll lower_bound(ll ar[], ll n, ll x){
	ll mid,low=0,high=n;
	while(low<high){
		mid=low+(high-low)/2;
		if(x<=ar[mid]){
			high=mid;
		}
		else{
			low=mid+1;
		}
		if(ar[low]<x){
			low++;
		}
		return low;
	}
}

//upper bound

ll upper_bound(ll ar[],ll n, ll x){

	ll mid,low=0,high=n;

	while(low<high){
		mid=low+(high-low)/2;
		if(x>=ar[mid]){
			low=mid+1;
		}
		else{
			high=mid;
		}
	}
	if(ar[low]<=x){
		low++;
	}
	return low;
}

//returns x^y in order logn 
ll power(ll x, ll y) 
{ 
    if (y == 0) return 1; 
    ll a = power(x,y/2);
    if (y % 2 == 0) return a * a; 
    else return x * a * a; 
}
 */





///function for hourglass sum

// int hourglassSum(vector<vector<int>>arr){


// 	//vector<vector<int>>sum(4,vector<int>(4,0));
// 	int maxSum=INT_MIN;
// 	int sum=0;

// 	for(int i=0; i<4; i++){

// 		for(int j=0; j<4; j++){
// 			sum+=arr[i][j]+arr[i][j+1]+arr[i][j+2];
// 			sum+=arr[i+1][j+1];
// 			sum+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
// 			if(sum>maxSum){
// 				maxSum=sum;
// 			}
// 		}
// 	}

// 	// for(int i=0; i<4; i++){
// 	// 	for(int j=0; j<4; j++){
// 	// 		if(sum[i][j]>=maxSum){
// 	// 			maxSum=sum[i][j];
// 	// 		}
// 	// 	}
// 	// }
// 	return maxSum;

// }


//array left rotation 
// int leftRotation(vector<int>v,int d){

// 	int n=v.size();
// 	vector<int>rotArr(n);
// 	for(int oldIdx=0; oldIdx<n; oldIdx++){
// 		int newIdx=(oldIdx+n-d)%n;
// 		rotArr[newIdx]=v[oldIdx];
// 	}

// 	return rotArr;
// }




 int main(){

 	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    int n,d;
    cin>>n>>d;
    vector<int>v(n);
    for(int i=0; i<n; i++){
    	cin>>v[i];
    }

    for(int i=0; i<n; i++){
    	cout<<v[(i+d)%n]<<' ';
    }


 	return 0;
 }

