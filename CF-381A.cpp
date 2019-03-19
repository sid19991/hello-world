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
    vector<ll>v;
    ll i;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll f=0;
    ll s=0;
    ll count=0;
    ll l=0;
    ll r=n-1;
    while(l<=r)
    {
        if(count%2==0)
        {
            if(v[l]>v[r])
            {
                f=f+v[l];
                l++;
            }
            else
            {
                f=f+v[r];
                r--;
            }
        }
        else
        {
            
            if(v[l]>v[r])
            {
                s=s+v[l];
                l++;
            }
            else
            {
                s=s+v[r];
                r--;
            }
        }
        count++;
    }
    cout<<f<<" "<<s<<endl;
    return 0;
}
