#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    ll sl=s.length();
    ll i;
    ll flag=1;
    for(i=0;i<sl;i++)
    {
        if(s[i]=='0')
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        ll boss=1;
        for(i=0;i<sl;i++)
        {
            if(s[i]=='0' && boss==1)
            {
                //cout<<s[i];
                boss=0;
            }
            else
            {
                cout<<s[i];
            }
        }
    }
    else
    {
        for(i=0;i<sl-1;i++)
        {
            cout<<s[i];
        }
    }
    return 0;
}
