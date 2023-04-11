#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,sum=0,a,b;
    cin>>n;
    if(n%2==0)
    {
        sum=n/2;
        for(int i=2; i<10; i++)
        {
            if(sum%i==0)
            {
                cout<<i<<endl;
            }
            else
            {
                  sum--;
                cout<<sum<<"MATH"<<endl;
            }
        }

        //if(count>1) cout<<n/2<<' '<<n/2<<endl;
    }


    return 0;
}
