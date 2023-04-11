#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],count=0;
    for(int i=1; i<=n; i++)
    {
          cin>>a[i];
    }
    for(int i=1; i<n; i++)
    {
          if(a[i] != a[i+1])
          {
                count++;
          }
    }
    cout<<count+1<<endl;
    return 0;
}
