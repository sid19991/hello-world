#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007


int main()
{
    FIO;
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll a[26];
    memset(a,0,sizeof(a));
    ll i;
    for(i=0;i<s.length();i++)
    {
        a[s[i]-'A']++;
    }
    ll mn=1000000000;
    for(i=0;i<k;i++)
    {
        mn=min(mn,a[i]);
    }
    cout<<mn*k<<endl;
    return 0;
}
