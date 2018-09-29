#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <queue>

using namespace std;
#define ll long long


int main() 
{
    string str="hello";
    string s;
    cin>>s;
    ll sl=s.length();
    ll pos=0;
    ll i;
    ll flag=0;
    for(i=0;i<sl;i++)
    {
        if(pos==5)
        {
            flag=1;
            break;
        }
        if(s[i]==str[pos])
        {
            pos++;
        }
        if(pos==5)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
