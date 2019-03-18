/*
    If you know what you are worth, go out and get what you are worth.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pi 3.14159265359
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

map<ll,ll>mp;


int main() {
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll i,j;
        for(j=0;j<2;j++)
        {
            for(i=0;i<n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        for(i=0;i<n;i++)
        {
            cout<<(i+i)%n<<" ";
        }
    }
    
    return 0;
}
