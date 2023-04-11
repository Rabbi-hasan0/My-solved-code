#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,count=0;
    cin>>n>>k;
    for(int j=0; j<n; j++)
    {
            cin>>x;
        if((x+k)<6)
        {
            count++;
        }
    }
    cout<<count/3<<endl;
    return 0;
}
