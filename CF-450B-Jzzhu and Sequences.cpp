#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll f1,f2;
    cin>>f1>>f2;
    ll i;
    ll n;
    cin>>n;
    ll f[7];
    f[1]=f1;
    f[2]=f2;
    f[3]=f2-f1;
    f[4]=-f1;
    f[5]=-f2;
    f[6]=f1-f2;
    
    n=(n-1)%6+1;
    ll ans=f[n]%1000000007;
    while(ans<0)
    {
        ans=ans+1000000007;
    }
    while(ans>1000000007)
    {
        ans=ans-1000000007;
    }
    cout<<ans<<endl;
    return 0;
}
