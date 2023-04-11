#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int y=x+1; y<=9012; y++)
    {
        int a=y%10;
        int b=y%100;
        int c=y%1000;
        int d=b/10;
        int e=c/100;
        int f=y/1000;
        if(a!=d && a!=e&&a!=f && d!=e && d!=f&& e!=f)
        {
            cout<<y<<"\n";
            break;
        }
    }
    return 0;
}
