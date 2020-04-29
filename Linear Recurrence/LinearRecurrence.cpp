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
const ll mod = 1e9+7;

using namespace std;

//for multiplying 2 matrices
V(V(ll)) matmul(V(V(ll)) a,V(V(ll)) b){
	int n = a.size();
	V(V(ll)) res(n,V(ll)(n,0));
	rep(i,0,n)
		rep(j,0,n)
			rep(k,0,n)
				res[i][j] = (res[i][j] + (a[i][k]*b[k][j])%mod)%mod;
	return res;
}

//for fast modular matrix exponentiation
V(V(ll)) power(V(V(ll)) a,ll b){
	int n = a.size();
	V(V(ll)) result(n,V(ll)(n,0));
	rep(i,0,n){
		result[i][i] = 1;
	}
	
	while(b > 0){
		if(b & 1){
			result = matmul(result,a);
		}
		a=matmul(a,a);
		b>>=1;
	}
	return result;
}

int main(){
	fast
	
	int t;
	cin>>t;
	rep(_,0,t){
		ll k;
		cin>>k;
		ll b[k],c[k];
		rep(i,0,k)
			cin>>b[i];
		rep(i,0,k)
			cin>>c[i];
		ll n;
		cin>>n;
		
		//for n less than k just show the fixed values in recurrence
		if(n<=k){
			cout<<b[n-1]<<endl;
		}
		else{
			ll result = 0;
			
			//making the transformation matrix for this
			V(V(ll)) T(k,V(ll)(k,0));
			rep(i,0,k-1){
				T[i][(i+1)%k] = 1;
			}
			rep(i,0,k){
				T[k-1][i] = c[k-i-1];
			}
			
			// Transformation Matrix
			//rep(i,0,k){
				//rep(j,0,k)
					//cout<<T[i][j]<<" ";
				//cout<<endl;
			//}
			
			T = power(T,n-1);
			rep(i,0,k){
				result = (result + (T[0][i] * b[i])%mod)%mod;
			}
			
			cout<<result<<endl;
		}
		
		
	}
	
	return 0;
}
