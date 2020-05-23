/*
 * 
 * Author: Pranav Bansal
 * 
*/

// Shortest Version of Kadane Algorithm

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
		int n;
		cin>>n;
		int arr[n];
		rep(i,0,n)
			cin>>arr[i];
			
		int best = 0, sum = 0;
		
		rep(k,0,n){
			sum = max(arr[k],sum+arr[k]);
			best = max(best,sum);
		}
		
		cout << best << endl;
	}
	
	return 0;
}
