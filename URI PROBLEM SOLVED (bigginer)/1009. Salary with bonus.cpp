#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      char a[50];
      cin>>a;
      double A,B,C, TOTAL=0;
      cin>>B>>C;
      A= C* 0.15;
      TOTAL= A+B;
      cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<TOTAL<<endl;
      return 0;
}
