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
    string s,t;
    cin>>s>>t;
    ll sl=s.length();
    ll tl=t.length();
    ll i;
    ll now=0;
    for(i=0;i<tl;i++)
    {
        if(now==sl)
        {
            cout<<now+1<<endl;
            return 0;
        }
        if(t[i]==s[now])
        {
            now++;
        }
    }
    cout<<now+1<<endl;
    return 0;
}
