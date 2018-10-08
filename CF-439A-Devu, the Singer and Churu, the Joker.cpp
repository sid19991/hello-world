#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n,d;
    cin>>n>>d;
    ll a[n];
    ll i;
    ll sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sum=sum+(n-1)*10;
    if(sum>d)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll boss;
        boss=(n-1)*2;
        boss=boss+(d-sum)/5;
        cout<<boss<<endl;
    }
    return 0;
}
