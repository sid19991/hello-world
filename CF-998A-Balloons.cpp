#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    ll sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(n==2)
    {
        if(a[0]==a[1])
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<1<<endl<<1<<endl;
        }
    }
    else if(n==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(a[0]==sum-a[0])
        {
            cout<<2<<endl<<1<<" "<<2<<endl;
        }
        else
        {
            cout<<1<<endl<<1<<endl;
        }
    }
    return 0;
}
