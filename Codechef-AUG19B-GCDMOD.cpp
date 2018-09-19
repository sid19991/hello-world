#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}

set<ll>bs;
set<ll>::iterator it;
map<ll,ll>m;
void primeFactors(ll n)
{
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        bs.insert(2);
        m[2]=(m[2]+1)%MOD;
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            bs.insert(i);
            m[i]=(m[i]+1)%MOD;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)
    {
        //printf ("%d ", n);
        bs.insert(n);
        m[n]=(m[n]+1)%MOD;
    }
}

map<ll,ll>m2;
void primeFactors2(ll n)
{
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        //bs.insert(2);
        m2[2]=(m2[2]+1)%MOD;
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            //bs.insert(i);
            m2[i]=(m2[i]+1)%MOD;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)
    {
        //printf ("%d ", n);
        //bs.insert(n);
        m2[n]=(m2[n]+1)%MOD;
    }
}

int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll diff=a-b;
        //cout<<a<<" "<<b<<" "<<n<<" "<<diff<<endl;
        
        // now find 2*b^n 
        primeFactors(b);
        if(diff!=0)
        {
            primeFactors2(diff);
            ll ans=1;
            for(it=bs.begin();it!=bs.end();it++)
            {
                m[*it]=(m[*it]*n)%MOD;
            }
            bs.insert(2);
            //m[2]=(m[2]+1)%1000000007;
            if(m[2]==0)
            {
                m[2]=1;
            }
            else
            {
                m[2]=(m[2]+1)%MOD;
            }
            for(it=bs.begin();it!=bs.end();it++)
            {
                ans=(ans*power( (*it) , min(m[*it],m2[*it]), MOD))%MOD;
            }
            cout<<ans<<endl;
            bs.clear();
            m.clear();
            m2.clear();

        }
        else
        {
            ll ans=1;
            //cout<<a<<" "<<b<<" "<<n<<endl;
            for(it=bs.begin();it!=bs.end();it++)
            {
                m[*it]=(m[*it]*n)%MOD;
            }
            bs.insert(2);
            //m[2]=(m[2]+1)%1000000007;
            if(m[2]==0)
            {
                m[2]=1;
            }
            else
            {
                m[2]=(m[2]+1)%MOD;
            }
            for(it=bs.begin();it!=bs.end();it++)
            {
                ans=(ans*power( (*it) , m[*it], MOD))%MOD;
            }
            cout<<ans<<endl;
            bs.clear();
            m.clear();
            m2.clear();
        }
    }
    return 0;
}
