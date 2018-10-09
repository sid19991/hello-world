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
    ll n;
    cin>>n;
    ll count=0;
    ll i;
    for(i=0;i<n;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b+c >= 2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
