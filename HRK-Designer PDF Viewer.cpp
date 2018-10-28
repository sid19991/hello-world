#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    ll i;
    ll a[26];
    for(i=0;i<26;i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    ll sl=s.length();
    ll mx=0;
    for(i=0;i<sl;i++)
    {
        mx=max(mx,a[s[i]-'a']);
    }
    cout<<mx*sl<<endl;

    return 0;
}
