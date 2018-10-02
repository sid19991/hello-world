#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    ll c1=m-1;
    ll c2=n-m;
    if(c1>c2)
    {
        cout<<m-1<<endl;
    }
    else if(c2>c1)
    {
        cout<<m+1<<endl;
    }
    else if(c1==c2)
    {
        cout<<m-1<<endl;
    }
    return 0;
}
