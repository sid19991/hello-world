/*
    If you know what you are worth, go out and get what you are worth.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pi 3.14159265359
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

map<ll,ll>mp;


int main() {
    
    ll n,l;
    cin>>n>>l;
    
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double mn = 0.00;
    for(i=0;i<n-1;i++)
    {
        double boss=(a[i+1]-a[i]);
        mn=max(mn,boss/2);
    }
    //cout<<mn<<endl;
    mn=max((double)a[0],mn);
    //cout<<mn<<endl;
    mn=max(mn,(double)l - a[n-1]);
    std::cout << std::fixed;
    std::cout << std::setprecision(12) << mn << '\n';
  
    
    return 0;
}
