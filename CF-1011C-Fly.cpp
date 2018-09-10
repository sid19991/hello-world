#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    std::ios::sync_with_stdio(false);  cin.tie(NULL);
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    ll a[n];
    ll b[n];
    ll i;
    long double boss=1.0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        boss=boss*(1-1/(long double)a[i]);
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        boss=boss*(1-1/(long double)b[i]);
    }
    if(boss==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        
        long double ans=(1/boss - 1)*m;
        printf("%.15Lf",ans);
    }
    
    return 0;
}
