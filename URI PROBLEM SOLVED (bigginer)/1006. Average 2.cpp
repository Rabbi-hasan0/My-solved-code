#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
      double A,B,C,x=0,MEDIA;

      cin>>A>>B>>C;
      x=(A*2)+(B*3)+(C*5);
      MEDIA=x/(2+3+5);
      cout<<"MEDIA = "<<fixed<<setprecision(1)<<MEDIA<<endl;
      return 0;
}
