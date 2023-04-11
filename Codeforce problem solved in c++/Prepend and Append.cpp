#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
      int n;cin>>n;
      string s;cin>>s;
      int cnt=n,x=n-1,i=0;
      int flag=1;

      while(x>=i)
      {
            if(s[i]=='0'&& s[x]=='1' || s[i]=='1'&& s[x]=='0' )
            {
                  cnt-=2;
                  x--;
                  i++;
            }
            else {
                  flag=0;break;
            }
      }
      if(flag==0) cout<<cnt<<endl;
      else cout<<cnt<<endl;


    }

    return 0;
}

