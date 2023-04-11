#include<iostream>
using namespace std;
int main()
{
    long long int x,n,m;
    cin>>n>>m;
    if(n%2==0)
    {
          x=n/2;
    }
    else
    {
          x=(n/2)+1;
    }
    if(x>=m)
    {
          cout<<(m*2)-1<<endl;
    }
    else
    {
          cout<<(m-x)*2<<endl;
    }
    return 0;
}

