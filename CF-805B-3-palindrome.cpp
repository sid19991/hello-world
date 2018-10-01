#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    //a b b a a b b a a b b  a  a  b  b  a  a
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
    ll n;
    cin>>n;
    ll i;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<'a';
        }
        else
        {
            if(i%4==1 || i%4==2)
            {
                cout<<'b';
            }
            else
            {
                cout<<'a';
            }
        }
    }
    return 0;
}
