#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long 

int main() {
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   // cout<<n<<endl;
   // cout<<a[n-1]-a[0]<<endl;
    cout<<(a[n-1]-a[0]+1)-n<<endl;
    
    return 0;
}
