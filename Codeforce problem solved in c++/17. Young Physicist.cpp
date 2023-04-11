#include<iostream>
using namespace std;
int main()
{
      int s=0,u=0,m=0,n;
      int x[100][100];
      cin>>n;
      for(int i=0; i<n; i++)
      {
            for(int j=0; j<3; j++)
            {
                  cin>>x[i][j];
            }
             s+=x[i][0];
             u+=x[i][1];
             m+=x[i][2];
      }
       if(s==0 && u==0 && m==0)
       {
             cout<<"YES"<<endl;
       }
       else
       {
             cout<<"NO"<<endl;
       }
      return 0;
}
