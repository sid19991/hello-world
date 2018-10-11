#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define SYNC std::ios::sync_with_stdio(false);  cin.tie(NULL);
bool prime[1000001];
void seive()
{
    ll n=1000000;
    
    memset(prime , 1 , sizeof(prime));
    ll i;
    for(i=2;i*i<=n;i++)
    {
        for(ll j=i*i;j<=n;j=j+i)
        {
            prime[j]=false;
        }
    }
    vector<ll>v;
    for(i=2;i<=n;i++)
    {
        if(prime[i])
        {
            v.push_back(i);
        }
    }
    std::vector<ll>::iterator low,up;
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll q;
        scanf("%lld",&q);
        low=std::lower_bound (v.begin(), v.end(), q); //          ^
        up= std::upper_bound (v.begin(), v.end(), q); //                   ^
        
        ll d1,d2;
        if(prime[q]==true)
        {
            printf("%lld\n",q);
        }
        else
        {
            d1=q-v[low-v.begin()-1];
            d2=v[up-v.begin()]-q;
            if(d1<d2)
            {
                printf("%lld\n",v[low-v.begin()-1]);
            }
            else if(d1>d2)
            {
                printf("%lld\n",v[up-v.begin()]);
            }
            else
            {
                printf("%lld\n",min(v[low-v.begin()-1] , v[up-v.begin()]));
            }
        }
        
    }
    
}

int main()
{
    SYNC;
    ll n;
    cin>>n;
    cout<<(n+1)/2<<endl;
    return 0;
    
}  
