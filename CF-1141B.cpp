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
    ll a[2*n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i+n]=a[i];
    }
    
    ll count=0;
    ll mx=0;
    for(i=0;i<2*n;i++)
    {
        //cout<<a[i]<<" "<<count<<endl;
        if(a[i]==1)
        {
            count++;
            mx=max(mx,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<mx<<endl;
    
    return 0;
}
