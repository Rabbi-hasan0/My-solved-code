#include<bits/stdc++.h>
using namespace std;
int n[100];
int main()
{
    int a,t,x,y,count=0,count1=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n[i];
        if (n[i]%2!=0)
        {
            x=n[i];
            count++;
        }
        else
        {
            y=n[i];
            count1++;
        }
    }
    if(count<count1)
    {
        for(int i=0; i<=t; i++)
        {
            a++;
            if(n[i]==x)
                  {
                break;
            }
        }
    }
    else{
    for(int i=0; i<=t; i++)
        {
            a++;
            if(n[i]==y)
                  {
                break;
            }
        }
    }
    cout<<a;
    return 0;
}



