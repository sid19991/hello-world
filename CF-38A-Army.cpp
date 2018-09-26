#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
    ll ba,bb;
    cin>>ba>>bb;
    ll count=0;
    for(i=ba;i<bb;i++)
    {
        //cout<<a[i]<<" ";
        count=count+a[i];
    }
    cout<<count<<endl;
    return 0;
}
