#include<iostream>
using namespace std;
int main()
{
      int n;cin>>n;
      int x,count=0;
      for(int i=0; i<n; i++)
      {
            cin>>x;

            if(x==1)
            {
                  count++;
            }
      }
if(count>0)
{
      cout<<"HARD"<<endl;
}
else
      cout<<"EASY"<<endl;
      return 0;
}
