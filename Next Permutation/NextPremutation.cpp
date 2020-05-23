/*
 * 
 * Author: Pranav Bansal
 * 
*/

// Next permutation of the sequence

#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(x) x.begin(),x.end()
#define watch(x) cout<<#x<<" = "<<x<<endl;
#define V(x) vector<x>
#define P(x,y) pair<x,y>
#define UMP(x,y) unordered_map<x,y>
#define MP(x,y) map<x,y>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define coutd(n) cout << fixed << setprecision(n)
typedef long long ll;
typedef double db;
typedef long double ld;
const ll mod = 1000000007;

using namespace std;

int main(){
	fast

	int t;
	cin>>t;
	rep(_,0,t){
		// For the arrays
		
		int n,temp;
		cin>>n;
		vector<int> arr;		//int arr[n]
		rep(i,0,n){
			cin>>temp;
			arr.pb(temp);
		}
		
		if(next_permutation(all(arr))){ //or 	next_permutation(arr,arr+n)
			rep(i,0,n)
				cout<<arr[i]<<" ";
			cout<<endl;
		}
		
		// For strings
		string str;
		cin>>str;
		if(next_permutation(all(str))){
			cout<<str<<endl;
		}
	}
	
	return 0;
}

/*

Input :
		1
		5
		3 4 1 2 1
		dabca


Output: 
		3 4 2 1 1
		dacab
*/
