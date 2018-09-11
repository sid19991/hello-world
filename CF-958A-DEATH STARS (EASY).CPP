include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define ll long long

int main() 
{
    
    // question no A1
    
    ll n,i,j;
    cin>>n;
    ll a[n][n];
    char ch;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>ch;
            if(ch=='X')
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    ll b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>ch;
            if(ch=='X')
            {
                b[i][j]=1;
            }
            else
            {
                b[i][j]=0;
            }
        }
    }
    
    
    ll f1=0 , f2=0 ,  f3=0 , f4=0 ,f5=0 ,f6=0,f7=0,f8=0,f9=0,f10=0,f11=0,f12=0;
    //0* original
    ll r=0,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[r][c])
            {
                f1=1;
                break;
            }
            c++;
        }
        r++;
    }
    //0* vertical
    r=0,c=0;
    for(i=n-1;i>=0;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[r][c])
            {
                f2=1;
                break;
            }
            c++;
        }
        r++;
    }
    // 0* horizontal
    r=0,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=n-1;j>=0;j--)
        {
            if(a[i][j]!=b[r][c])
            {
                f3=1;
                break;
            }
            c++;
        }
        r++;
    }
    //90* original
    r=0,c=0;
    for(j=n-1;j>=0;j--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]!=b[r][c])
            {
                f4=1;
                break;
            } 
            c++;
        }
        r++;
    }
    //90* vertical
    r=0,c=0;
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]!=b[r][c])
            {
                f5=1;
                break;
            }  
            c++;
        }
        r++;
    }
    // 90* horizontal
    r=0,c=0;
    for(j=n-1;j>=0;j--)
    {
        c=0;
        for(i=n-1;i>=0;i--)
        {
            
            if(a[i][j]!=b[r][c])
            {
                f6=1;
                break;
            }
            c++;
        }
        r++;
    }
    //cout<<f5<<endl;
    
    // 180* original
    r=0,c=0;
    for(i=n-1;i>=0;i--)
    {
        c=0;
        for(j=n-1;j>=0;j--)
        {
            if(a[i][j]!=b[r][c])
            {
                f7=1;
                break;
            }
            c++;
        }
        r++;
    }
    // 180* vertical
    r=0,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=n-1;j>=0;j--)
        {
            if(a[i][j]!=b[r][c])
            {
                f8=1;
                break;
            }
            c++;
        }
        r++;
    }
    // 180* horizontal
    r=0,c=0;
    for(i=n-1;i>=0;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[r][c])
            {
                f9=1;
                break;
            }
            c++;
        }
        r++;
    }
    // 270* original
    r=0,c=0;
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i][j]!=b[r][c])
            {
                f10=1;
                break;
            }
            c++;
        }
        r++;
    }
    //270* vertical
    r=0,c=0;
    for(j=n-1;j>=0;j--)
    {
        c=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i][j]!=b[r][c])
            {
                f11=1;
                break;
            }
            c++;
        }
        r++;
    }
    //270* horizontal
    r=0,c=0;
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=0;i,n;i++)
        {
            if(a[i][j]!=b[r][c])
            {
                f12=1;
                break;
            }
            c++;
        }
        r++;
    }
    
    if(f1 ==0 || f2 ==0|| f3 ==0||f4 ==0|| f5 ==0|| f6 ==0 || f7 ==0 || f8 ==0 || f9 ==0 || f10 ==0||f11==0 || f12 ==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    //cout<<f2<<endl;
    
    return 0;
}
