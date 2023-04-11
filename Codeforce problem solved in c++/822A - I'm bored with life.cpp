#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum=1;
    cin>>a>>b;
    if(a>b)
    {
    for(int i=1; i<=b; i++)
    {
        sum*=i;
    }
     cout<<sum<<endl;
    }
    else
    {
      for(int i=1; i<=a; i++)
    {
        sum*=i;
    }
     cout<<sum<<endl;
    }
    return 0;
}


