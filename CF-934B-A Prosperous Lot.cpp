#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main()
{
    
    ll n;
    cin>>n;
    ll i;
    if(n>36)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(n%2==0)
        {
            for(i=0;i<n;i=i+2)
            {
                cout<<8;
            }
        }
        else
        {
            for(i=0;i<n-1;i=i+2)
            {
                cout<<8;
            }
            cout<<4;
        }
    }
    
    return 0;
}
