#include<iostream>
using namespace std;
int a[105];
int main()
{
      int n;cin>>n;
      int x,p1;cin>>p1;
      for(int i=0; i<p1; i++)
      {
            cin>>x;
            a[x]=1;
      }
      int y,p2;cin>>p2;
      for(int i=0; i<p2; i++)
      {
            cin>>y;
            a[y]=1;
      }
      int count=0;
      for(int i=1; i<=n; i++)
      {
            if(a[i]==1)
            {
                  count++;
            }
      }
      if(count==n)
      {
            cout<<"I become the guy"<<endl;
      }
      else
      {
            cout<<"Oh, my keyboard!"<<endl;
      }
    return 0;
}
