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
    string s[n];
    ll i;
    ll last=-1;
    ll count=1;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]!=s[i-1] && i!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
