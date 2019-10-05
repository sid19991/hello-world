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
#define MOD 1000003
using namespace std;
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll modInv(ll x,ll M){
    return powermodm(x,M-2,M);
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 	ll n;
 	cin>>n;
 	ll a[n],b[n];
 	unordered_map<ll,ll> freq,sums;
 	forr(i,0,n){
 		cin>>a[i];
 		freq[a[i]]++;
 	}
 	forr(i,0,n){
 		cin>>b[i];
 		sums[a[i]]+=b[i];
 	}
 	ll ans = 0,mastOR = 0,size = 0;
 
 	for(auto it = freq.begin();it!=freq.end();it++){
 		if(it->second>1){
 			ans+=sums[it->first];
 			size+=it->second;
 			mastOR = mastOR|it->first;
 		}
 	}
 	for(auto it = freq.begin();it!=freq.end();it++){
 		if(it->second==1){
 			bool f = false;
 			forr(j,0,60){
 				if(((it->first)&(1LL<<j)) && ((mastOR&(1LL<<j))==0)){
 					f = true;
 					break;
 				}
 			}
 			if(!f){
 				ans+=sums[it->first];
 				size++;
 			}
 		}
 	}
 	cout<<(size>=2?ans:0)<<'\n';
    return 0;
 
}
