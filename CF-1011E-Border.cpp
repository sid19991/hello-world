#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    std::ios::sync_with_stdio(false);  cin.tie(NULL);
    ll n,base;
    cin>>n>>base;
    ll i;
    ll boss=base;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        boss=__gcd(boss,x);
    }
    ll p=0;
    ll x=0;
    while(p<base)
    {
        v.push_back(p);
        x++;
        p=p+boss;
    }
    cout<<x<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
