#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,sum=0;
    cin>>k>>r;

    for(int i=1; ; i++)
    {
        sum=(k*i)-r;
        if(sum%10==0|| (k*i)%10==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}

