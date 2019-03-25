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
    char c[n];
    string s="ROYG";
    ll i;
    ll pos=0;
    for(i=0;i<n;i++)
    {
        c[i]=s[(pos+i)%4];
    }
    c[0]='B';
    c[1]='I';
    c[2]='V';
    for(i=0;i<n;i++)
    {
        cout<<c[i];
    }
    
    return 0;
}
