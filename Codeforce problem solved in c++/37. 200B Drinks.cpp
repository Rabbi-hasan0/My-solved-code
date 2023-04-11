#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    float x,sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    x=sum/n;
    cout<<x<<endl;
    return 0;
}






