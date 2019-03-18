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
    string s[3];
    ll sl=s[0].length();
    ll i;
    ll a[3];
    memset(a,0,sizeof(a));
    for(i=0;i<3;i++)
    {
        cin>>s[i];
        if(s[i][1]=='>')
        {
            a[s[i][0]-'A']++;
            a[s[i][2]-'A']--;
        }
        else
        {
            a[s[i][0]-'A']--;
            a[s[i][2]-'A']++;
        }
    }
    char c='A';
    if(a[0]==2 && a[1]==0 && a[2]==-2)
    {
        cout<<"CBA"<<endl;
        return 0;
    }
    
    if(a[0]==2 && a[1]==-2 && a[2]==0)
    {
        cout<<"BCA"<<endl;
        return 0;
    }
    if(a[0]==0 && a[1]==2 && a[2]==-2)
    {
        cout<<"CAB"<<endl;
        return 0;
    }
    if(a[0]==0 && a[1]==-2 && a[2]==2)
    {
        cout<<"BAC"<<endl;
        return 0;
    }
    if(a[0]==-2 && a[1]==0 && a[2]==2)
    {
        cout<<"ABC"<<endl;
        return 0;
    }
    if(a[0]==-2 && a[1]==2 && a[2]==0)
    {
        cout<<"ACB"<<endl;
        return 0;
    }
    cout<<"Impossible"<<endl;
    
    
    
    return 0;
}
