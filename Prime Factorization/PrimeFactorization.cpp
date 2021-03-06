/*
 * 
 * Author: Pranav Bansal
 * 
*/

// Prime Factorization of the numbers.

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

int32_t main(){
    fast
    	
	int t;
	cin>>t;
	rep(_,0,t){
		int n;
		cin>>n;
		for(int i=2;i*i<=n;i++){
			if(n%i == 0){
				int count = 0;
				while(n%i == 0){
					n/=i;
					count++;
				}
				cout<<i<<"^"<<count<<endl;
			}
		}
		if(n>1)
			cout<<n<<"^"<<1<<endl;
		cout<<endl;
	}
    
    return 0;
}
