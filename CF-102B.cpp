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
    string s;
    cin>>s;
    ll sl=s.length();
    ll i;
    ll count=0;
    if(sl==1)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=0;i<sl;i++)
    {
        count=count+s[i]-'0';
    }
    ll ans=1;
    while(count>=10)
    {
        //cout<<count<<endl;
        ll now=0;
        while(count)
        {
            now=now+count%10;
            count=count/10;
        }
        
        count=now;
        ans++;
    }
    
    cout<<ans<<endl;
    return 0;
}
