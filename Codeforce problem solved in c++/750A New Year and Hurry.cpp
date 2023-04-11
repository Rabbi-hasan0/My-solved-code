#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,count=0;
    cin>>n>>k;
    b=240-k;
    for(int i=1; i<=n; i++)
    {
        a=i*5;
        b-=a;
        if(b>=0)
        {
            count++;
        }
    }
cout<<count<<endl;
    return 0;
}

