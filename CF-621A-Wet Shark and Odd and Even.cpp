#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;
#define ll long long

int main() 
{
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll boss=0;
    for(i=0;i<n;i++)
    {
        boss=boss+a[i];
    }
    if(boss%2==0)
    {
        cout<<boss<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                boss=boss-a[i];
                break;
            }
        }
        cout<<boss<<endl;
    }
    return 0;
}
