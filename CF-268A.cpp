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
    ll a[n],b[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    ll count=0;
    for(i=0;i<n;i++)
    {
        ll j;
        for(j=i+1;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==b[j])
                {
                    count++;
                }
                if(a[j]==b[i])
                {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
