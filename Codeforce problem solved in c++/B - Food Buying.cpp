#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,x,y,sum=0;
        cin>>n;
        for(int i=0; ;i++)
        {
              x=(n/10)*10;
              sum+=x;
              y=n-x;
              n=(n/10)+y;
              if(n<10)
              {
                    sum+=n;
                    break;
              }
        }
cout<<sum<<endl;

    }
    return 0;
}

