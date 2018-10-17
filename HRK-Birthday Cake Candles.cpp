#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
   ll n,i;
    cin>>n;
    ll a[n];        
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll mac=a[n-1];
    ll count=0;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==mac)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
