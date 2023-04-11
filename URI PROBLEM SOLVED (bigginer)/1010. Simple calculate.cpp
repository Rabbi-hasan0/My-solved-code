#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      int x,y,m,n;
      float z,o,a,b,c=0;
      cin>>x>>y>>z;
      cin>>m>>n>>o;
      a= y*z;
      b= n*o;
      c= a+b;
      cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<c<<endl;
      return 0;
}
