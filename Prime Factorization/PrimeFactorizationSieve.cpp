/*
 * 
 * Author: Pranav Bansal
 * 
*/

// Prime Factorization for the numbers which have more that one factor using sieve of Eratosthenes.

#include<bits/stdc++.h>

#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(x) x.begin(),x.end()
#define V(x) vector<x>
#define P(x,y) pair<x,y>
#define UMP(x,y) unordered_map<x,y>
#define MP(x,y) map<x,y>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define inf 1e18
#define endl "\n"
#define coutd(n) cout << fixed << setprecision(n)
#define watch(x) cout<<#x<<" = "<<x<<endl;
typedef double db;
typedef long double ld;	
const int mod = 1000000007;

using namespace std;

//extra 1 because index start from 1
int arr[1000001];

void sieve(){
	int max = 1e6;
	
	rep(i,0,1e6)
		arr[i] = -1;
	
	rep(i,2,max+1)
		if(arr[i] == -1)
			for(int j=i;j<=max;j+=i)
				if(arr[j] == -1)
					arr[j] = i;
}

int32_t main(){
    fast
    	
    sieve();
    int t;
	cin>>t;
	rep(_,0,t){
		int n;
		cin>>n;
		if(n == 1 || n == 0){
			cout<<"Err\n";
			continue;
		}
		while(n > 1){
			if(arr[n] != n){
				cout<<arr[n]<<" * ";
				n/=arr[n];
			}
			else{
				cout<<n<<" * "<<1<<endl;
				break;
			}
		}
	}	
    return 0;
}
