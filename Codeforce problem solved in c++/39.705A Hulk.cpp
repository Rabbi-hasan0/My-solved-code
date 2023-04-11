#include<iostream>
using namespace std;
int main()
{
    int x, n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i>=1)
        {
            cout<<" that ";
        }
        if(i%2==0)
        cout<<"I hate ";

       if(i%2 !=0)
        {
            cout<<"I love ";
        }
    }
    cout<<"it"<<endl;
    return 0;
}
