#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll p,y;
    cin>>p>>y;
    ll i,j;
    ll flag;
    for(i=y;i>p && i>=y-300;i--)
    {
        flag=0;
        int up = sqrt(i * 1.0);
        for(j=2;j<=p && j<=up ;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
    return 0;
}
