#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      int A,B, NUMBER;
      float C, SALARY;
      cin>>A>>B>>C;
      SALARY= B*C;
      cout<<"NUMBER = "<<A<<endl;
      cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<SALARY<<endl;
      return 0;
}
