#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n,m;
    
    cin>>n>>m;
    ll a[n];
    ll i;
    ll boss[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        boss[i]=(a[i]-1)/m;
    }
    ll mx=0;
    ll mxpos=-1;
    for(i=0;i<n;i++)
    {
        if(boss[i]>=mx)
        {
            mx=boss[i];
            mxpos=i;
        }
    }
    cout<<mxpos+1<<endl;
    return 0;
}
