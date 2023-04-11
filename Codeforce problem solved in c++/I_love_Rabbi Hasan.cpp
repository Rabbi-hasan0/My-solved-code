#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    int arra[t];
    for(int i=0; i<t; i++)
    {
        cin>>arra[i];
    }
    int max=arra[0];
    int min=arra[0];
    for(int i=0; i<t; i++)
    {
        if(max<arra[i])
        {
            max= arra[i];
            count++;
        }
        if(min>arra[i])
        {
            min=arra[i];
            count++;
        }
    }
    cout<<count<< endl;
    return 0;
}

