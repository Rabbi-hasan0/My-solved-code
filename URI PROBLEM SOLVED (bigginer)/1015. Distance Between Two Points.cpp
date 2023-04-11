#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
      double x1,y1,x2,y2,a=0,b=0,c=0;
      cin>>x1>>y1;
      cin>>x2>>y2;
      a=(x2-x1)*(x2-x1);
      b=(y2-y1)*(y2-y1);
      c=sqrt(a+b);
      cout<<fixed<<setprecision(4)<<c<<endl;
      return 0;
}
