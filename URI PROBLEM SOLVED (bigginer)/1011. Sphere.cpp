#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      double R, a,b,c;
      cin>>R;
      a=R*R*R;
      b= a*3.14159;
      c=(4/3.0)*b;
      cout<<"VOLUME = "<<fixed<<setprecision(3)<<c<<endl;
      return 0;
}
