#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      double x,y,b=0;
      cin>>x;
      cin>>y;
      b=x*(y/12);
      cout<<fixed<<setprecision(3)<<b<<endl;
      return 0;
}
