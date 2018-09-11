#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define ll long long

int main() 
{
    // question no C1
    ll n,p,i;
    cin>>n>>p;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum[n];
    sum[0]=a[0];
    for(i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    ll max=-1;
    for(i=0;i<n;i++)
    {
        if((sum[i]%p)+((sum[n-1]-sum[i])%p) > max )
        {
            max=(sum[i]%p)+((sum[n-1]-sum[i])%p);
        }
    }
    cout<<max<<endl;
    
    return 0;
}
