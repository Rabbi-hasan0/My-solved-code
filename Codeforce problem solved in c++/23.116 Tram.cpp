#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        x=(a+y)-b;
        if(x<0)
        {
            y=0;
        }
        else
            y=x;
    }
    cout<<x<<endl;
    return 0;
}
