#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll mx=0;
    ll n,d;
    cin>>n>>d;
    string s[d];
    ll i,j;
    for(i=0;i<d;i++)
    {
        cin>>s[i];
    }
    ll count=0;
    for(i=0;i<d;i++)
    {
        ll flag=1;
        for(j=0;j<n;j++)
        {
            if(s[i][j]=='0')
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count=0;
            
        }
        else
        {
            count++;
            mx=max(mx,count);
        }
    }
    cout<<mx<<endl;
    return 0;
}
