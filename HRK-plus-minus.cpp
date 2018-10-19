#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,i;
    cin>>n;
    ll a[n];
    float z=0,p=0,ne=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            ne++;
        }
        else
            z++;
    }
   // cout<<p<<" "<<ne<< " "<< z<<endl;
        std::cout << std::fixed;

        std::cout << std::setprecision(6);
    float ab=p/n;
    cout<<ab<<endl;
    
    ab=ne/n;
    cout<<ab<<endl;
    
    ab=z/n;
    cout<<ab<<endl;
    
    return 0;
}
