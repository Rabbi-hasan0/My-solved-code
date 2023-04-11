#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      double A,B,C, pi=3.14159,x,y,z,m,n;
      cin>>A>>B>>C;
      x= 0.5*A*C;
      y= pi*(C*C);
      z= 0.5*(A+B)*C;
      m= B*B;
      n= A*B;
      cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<x<<endl;
      cout<<"CIRCULO: "<<fixed<<setprecision(3)<<y<<endl;
      cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<z<<endl;
      cout<<"QUADRADO: "<<fixed<<setprecision(3)<<m<<endl;
      cout<<"RETANGULO: "<<fixed<<setprecision(3)<<n<<endl;
      return 0;
}
