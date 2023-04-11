#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    cin>>n;
    if(n>99)
    {
        a=n/100;
        b=n-(a*100);
    }
    else
    {
        a=n/20;
        b=n-(a*20);
    }
    if(b>19)
    {
        c=b/20;
        d=b-(c*20);
    }
    else
    {
        c=b/10;
        d=b-(c*10);
    }

    if(d>9)
    {
        e=d/10;
        f=d-(e*10);
    }
    else
    {
        e=d/5;
        f=d-(e*5);
    }
    if(f>4)
    {
        g=f/5;
        h=f-(e*5);
    }
    else
    {
        h=f;
    }
    cout<<a+c+e+g+h<<endl;
    return 0;
}

