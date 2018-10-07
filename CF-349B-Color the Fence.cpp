#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
    ll v;
    cin>>v;
    ll a[10];
    ll i;
    ll mn=1000000000;
    for(i=1;i<=9;i++)
    {
        cin>>a[i];
        if(a[i]<mn)
        {
            mn=a[i];
        }
    }
    if(mn>v)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=9;i>=1;i--)
    {
        while( (v-a[i])/mn >= v/mn -1 && v>=a[i] )
        {
            cout<<i;
            v=v-a[i];
        }
    }
    return 0;
}
