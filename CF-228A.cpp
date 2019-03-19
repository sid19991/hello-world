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
    ll a[4];
    set<ll>s;
    ll i;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<4-s.size()<<endl;
    
    return 0;
}
