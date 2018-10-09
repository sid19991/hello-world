#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <queue>

using namespace std;
#define ll long long


int main() 
{
    ll n,m;
    cin>>n>>m;
    ll i;
    ll a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    ll mn=10000000;
    /*
    for(i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
    */
    for(i=0;i<=m-n;i++)
    {
        //cout<<i<<" "<<a[i]<<" "<<a[i+n-1]<<endl;
        mn=min(mn,a[i+n-1]-a[i]);
    }
    cout<<mn<<endl;
    return 0;
}
