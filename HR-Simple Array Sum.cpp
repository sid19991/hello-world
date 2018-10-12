#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll size;
    cin>>size;
    ll i;
    ll ayush[size];
    ll sum=0;
    for(i=0;i<size;i++)
    {
        cin>>ayush[i];
        sum=sum+ayush[i];
    }
    cout<<sum<<endl;
    
    
    
    return 0;
}
