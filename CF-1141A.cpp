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
    
    ll n,m;
    cin>>n>>m;
    ll boss = m/n;
    if(boss*n != m)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll i;
    ll count=0;
    while(boss%2==0)
    {
        boss=boss/2;
        count++;
    }
    while(boss%3==0)
    {
        boss=boss/3;
        count++;
    }
    if(boss==1)
    {
        cout<<count<<endl;
        return 0;
    }
    cout<<-1<<endl;
    
    return 0;
}
