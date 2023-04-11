#include<iostream>
using namespace std;
int main()
{
      int k,n,w,x,m=0,y=0;

      cin>>k>>n>>w;

      for(int i=1; i<=w; i++)
      {
            x=k*i;
            m+=x;
      }
      if(m>n)
      {
            y=m-n;
            cout<<y<<endl;
      }
      else
      {
            cout<<'0'<<endl;
      }
      return 0;
}
