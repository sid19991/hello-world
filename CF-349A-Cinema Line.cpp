#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll tf=0,ff=0,hh=0;
    ll i;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==25)
        {
            tf++;
        }
        if(a[i]==50)
        {
            if(tf>0)
            {
                tf--;
                ff++;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(a[i]==100)
        {
            if(ff>0 && tf>0)
            {
                tf--;
                ff--;
                hh++;
            }
            else if(tf>=3)
            {
                tf=tf-3;
                hh++;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    
    return 0;
}
