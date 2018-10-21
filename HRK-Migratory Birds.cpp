#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll a[5];

int main() {
    ll n,i,boss;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>boss;
        a[boss-1]++;
    }
    
    ll max=0;
    for(i=1;i<5;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    cout<<max+1<<endl;
    
    return 0;
}
