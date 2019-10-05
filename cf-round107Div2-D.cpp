#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define ld long double
#define forr(i,k,n) for(ll i=k;i<n;i++)
#define rev(i,k) for(ll i=k;i>=0;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pll pair<ll,ll>
#define MX LLONG_MAX
#define MN LLONG_MIN
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define MOD 1000000007
using namespace std;
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll modInv(ll x,ll M){
    return powermodm(x,M-2,M);
}
ll id[2005];
ll size[2005];
void initialize(ll n){
	forr(i,0,n){
		id[i] = i;
		size[i] = 1;
	}
}
ll root(ll x){
	while(id[x]!=x){
		id[x] = id[id[x]];
		x = id[x];
	}
	return x;
}
void weightedUnion(ll a,ll b){
	ll root_A = root(a),root_B = root(b);
	if(root_A==root_B)
		return;
	if(size[root_A]<size[root_B]){
		id[root_A] = root_B;
		size[root_B]+=size[root_A];
	}else{
		id[root_B] = root_A;
		size[root_A]+=size[root_B];	
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 	ll n,m,k;
 	cin>>n>>m>>k;
 	if(k>n){
 		k=n+1;
 		// cout<<powermodm(m,n,MOD)<<'\n';
 		// return 0;
 	}
 	// cout<<powermodm(m,n,MOD)<<'\n';
 	initialize(n);
 	forr(base,0,n-k+1){
 		forr(j,0,k){
 			weightedUnion(base+j,base+k-j-1);
 			// cout<<base+j<<" "<<(base+k-j-1)<<'\n';
 		}
 	}
 	ll comps = 0;
 	forr(i,0,n){
 		if(id[i]==i){
 			comps++;
 		}
 	}
 	
 	cout<<powermodm(m,comps,MOD)<<'\n';
    return 0;
 
}
