#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll boss;
        cin>>boss;
        if(boss<38)
        {
            cout<<boss<<endl;
        }
        else
        {
            ll temp=boss/5;
            temp=(temp+1)*5;
            if(temp-boss<3)
            {
                boss=temp;
                cout<<boss<<endl;
            }
            else
            {
                cout<<boss<<endl;
            }
        }
    }
    return 0;
}
