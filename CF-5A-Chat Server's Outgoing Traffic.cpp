#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() 
{
	ios_base::sync_with_stdio(false);
    std::string s;
    ll count=0;
    ll boss=0;
    while(std::getline (std::cin,s))
    {
        
        if(s[0]=='+')
        {
            count++;
        }
        else if(s[0]=='-')
        {
            count--;
        }
        else
        {
            ll i;
            ll sl=s.length();
            ll req;
            for(i=0;i<sl;i++)
            {
              if(s[i]==':')
              {
                  req=sl-i-1;
                  break;
              }
            }
            boss=boss+ count*req;
          //cout<<req<<" ";
        }
        //cout<<count<<" "<<boss<<endl;
    }
    cout<<boss<<endl;
	return 0;
}
