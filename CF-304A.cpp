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
    if(s[0]>='a' && s[0]<='z')
    {
        s[0]=s[0]-'a'+'A';
    }
    cout<<s<<endl;
    return 0;
}
