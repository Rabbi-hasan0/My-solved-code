#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      float y,i;
      int x;
      cin>>x;
      cin>>y;
      i=x/y;
      cout<<fixed<<setprecision(3)<<i<<" km/l"<<endl;
      return 0;
}

