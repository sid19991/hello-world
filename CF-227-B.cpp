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
    
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    
    ll q;
    cin>>q;
    ll v=0,p=0;
    while(q--)
    {
        ll boss;
        cin>>boss;
        v=v+mp[boss]+1;
        p=p+n-mp[boss];
    }
    cout<<v<<" "<<p<<endl;
    
    return 0;
}
