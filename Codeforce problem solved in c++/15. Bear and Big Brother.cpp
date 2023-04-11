#include<iostream>
using namespace std;
int main()
{
      int x,y,i;
      cin>>x;
      cin>>y;
       for(i=1; ;i++)
       {
            x*=3;
            y*=2;
             if(x>y)
             {
                   break;
             }
       }
        cout<<i;
      return 0;
}

