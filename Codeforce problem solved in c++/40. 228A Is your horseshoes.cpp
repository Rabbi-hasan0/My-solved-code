#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int count=0,count1=0,count2=0;

    if(a==b||a==c||a==d)
    {
        count++;
    }
    if(b==c||b==d)
    {
        count1++;
    }
    if(c==d)
    {
        count2++;
    }
    cout<<count+count1+count2;

    return 0;
}

