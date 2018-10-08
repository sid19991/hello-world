
 #include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n,d;
    cin>>n>>d;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll count=0;
    ll boss=d;
    for(i=0;i<n;i++)
    {
        ll one=1;
        count=count+boss*a[i];
        boss=max(boss-1,one);
    }
    cout<<count<<endl;
    
    return 0;
}
