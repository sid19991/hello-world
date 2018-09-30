#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll count=0;
        while(n--)
        {
            ll a,b;
            cin>>a>>b;
            if(b>a+5)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
