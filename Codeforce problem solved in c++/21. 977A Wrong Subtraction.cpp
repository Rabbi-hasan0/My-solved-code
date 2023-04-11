#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int sum=0,z=0;
    for(int i=0; i<x; i++)
    {
        sum=n%10;
        if(sum>0)
        {
            n=n-1;
        }
       else if (sum<1)
        {
            n=n/10;
        }
    }
    cout<<n<<endl;
    return 0;
}
