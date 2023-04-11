#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a,b,c,t;cin>>t;
      for(int i=0; i<t; i++)
      {
            cin>>a>>b>>c;
            if(a<b && b<c || a>b && b>c)
            {
                  cout<<b<<endl;
            }
            else if(a<c && c<b || a>c && c>b)
            {
                  cout<<c<<endl;
            }
            else
             cout<<a<<endl;
      }
    return 0;
}

