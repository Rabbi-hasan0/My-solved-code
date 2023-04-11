#include<iostream>
using namespace std;
main()
{
    int n,h;cin>>n>>h;
    int x,y=0,z=0;
    for(int i=0; i<n; i++)
    {
          cin>>x;

          if(x>h)
          {
                y++;
          }
          else if(x==h || x<h)
          {
                z++;
          }
    }
     cout<<(y*2)+(z*1)<<endl;
    return 0;
}
