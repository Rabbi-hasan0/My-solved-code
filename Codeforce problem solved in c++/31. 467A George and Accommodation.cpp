#include<iostream>
using namespace std;
int main()
{
      int n;cin>>n;
      int x,y,z,count=0;
      for(int i=0; i<n; i++)
      {
            cin>>x>>y;
            z=x+2;
            if(x+2<=y)
            {
                  count++;
            }
      }
      cout<<count<<endl;
      return 0;
}

