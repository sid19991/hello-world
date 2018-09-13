#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n;
    cin>>n;
    ll i,j;
    ll count=0;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            ll x=i^j;
            vector<ll> v;
            v.push_back(i);
            v.push_back(j);
            v.push_back(x);
            sort(v.begin() , v.end() );
            if(v[2]>= v[1]+v[0])
            {
                continue;
            }
            if(x<=n && x!=i && x!=j)
            {
                count++;
            }
        }
    }
    cout<<count/3<<endl;
    return 0;

}
