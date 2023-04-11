#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;cin>>n;
       int x[n];
       for(int i=0; i<n; i++) cin>>x[i];
       int len=sizeof(x)/sizeof(x[0]);
       sort(x , x + len);

       int y=1000,sum=0;
       for(int i=0; i<len-1; i++)
       {
             sum= x[i+1]-x[i];
              if(y>sum)
            {
                  y=sum;
            }
       }
        cout<<y<<endl<<endl;
    }
    return 0;
}

