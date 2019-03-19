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
    ll k,r;
    cin>>k>>r;
    ll cost=0;
    ll i;
    for(i=1;i<=1000;i++)
    {
        cost=i*k;
        if(cost%10==0 || cost%10==r)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
