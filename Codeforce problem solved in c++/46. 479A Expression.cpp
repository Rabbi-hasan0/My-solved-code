#include<iostream>
using namespace std;
int main()
{
      int a,b,c,p,o,x,y,z;cin>>a>>b>>c;
       x=a+b*c;
       y=a*(b+c);
       z= a*b*c;
       p=(a+b)*c;
       o=a+b+c;
      if(x>y&&x>z&&x>p&&x>o)
      {
            cout<<x<<endl;
      }
      else if(y>x&&y>z&&y>p&&y>o)
      {
            cout<<y<<endl;
      }
      else if(z>x&&z>y&&z>p&&z>o)
      {
            cout<<z<<endl;
      }
      else if(p>x&&p>y&&p>z&&p>o)
      {
            cout<<p<<endl;
      }
      else if(o>x&&o>y&&o>z&&o>p)
      {
            cout<<o<<endl;
      }
      else if(y==p || y==o)
      cout<<y<<endl;
    return 0;
}
