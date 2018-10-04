#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    ll i;
    for(i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    ll boss=-1;
    for(i=0;i<n;i++)
    {
        if(boss<=v[i].second)
        {
            boss=v[i].second;
        }
        else
        {
            boss=v[i].first;
        }
    }
    cout<<boss<<endl;
    return 0;
}
