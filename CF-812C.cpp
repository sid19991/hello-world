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
ll n,b;
vector<ll>v;
ll cost=0;
bool check(ll size)
{
    ll i;
    ll a[v.size()];
    for(i=0;i<v.size();i++)
    {
        a[i]=v[i]+(i+1)*size;
    }
    sort(a,a+n);
    ll sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    if(sum<=b)
    {
        cost=sum;
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    
    
    cin>>n>>b;
    
    ll i;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    // we need to do binary search on answer;
    ll l=0;
    ll r=n;
    ll bp=0; // biggest possible
    while(r>=l)
    {
        ll m = l + (r-l)/2;
        
        ll boss=check(m);
        //cout<<m<<" "<<boss<<endl;
        if(boss==1)
        {
            bp=m;
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    cout<<bp<<" "<<cost<<endl;
    return 0;
}
