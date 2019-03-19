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
    ll police=0;
    ll count=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            if(police==0)
            {
                count++;
            }
            else
            {
                police--;
            }
        }
        else
        {
            police=police+a[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
