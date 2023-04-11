#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a>=b) sum=(a-b);
        if(b>a) sum=(b-a);
        if(sum%10==0)
        {
            cout<<sum/10<<endl;
        }
        else
        {
            cout<<(sum/10)+1<<endl;
        }
    }
    return 0;
}
