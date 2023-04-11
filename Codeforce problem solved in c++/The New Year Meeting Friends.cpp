#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    if(a>b && c>a || b>a && a>c)
    {
        if(b>a)
        {
              cout<<(b-a)+(a-c)<<endl;
        }
        else
        {
              cout<<(c-a)+(a-b)<<endl;
        }
    }

    if(b>a && b<c || b<a && c<b)
    {
        if(a>b)
        {
              cout<<(a-b)+(b-c)<<endl;
        }
        else
        {
              cout<<(c-b)+(b-a)<<endl;
        }
    }

    if(a>c && c>b || c>a && b>c)
    {
        if(b>c)
        {
              cout<<(b-c)+(c-a)<<endl;
        }
        else
        {
              cout<<(a-c)+(c-b)<<endl;
        }
    }



    return 0;
}

