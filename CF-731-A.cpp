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
    char now ='a';
    ll count=0;
    ll i;
    for(i=0;i<s.length();i++)
    {
        count=count+min((s[i]-now+26)%26, (now-s[i]+26)%26);
        now=s[i];
    }
    cout<<count<<endl;
    
    return 0;
}
