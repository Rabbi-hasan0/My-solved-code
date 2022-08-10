#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
      float A,B,x=0,MEDIA;

      cin>>A;
      cin>>B;
      x=(A*3.5)+(B*7.5);
      MEDIA=x/(3.5+7.5);
      cout<<"MEDIA = "<<fixed<<setprecision(5)<<MEDIA<<endl;
      return 0;
}
