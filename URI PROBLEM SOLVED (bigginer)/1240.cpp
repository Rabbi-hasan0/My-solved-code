#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x=0,y=0,c;
        int a,b;cin>>a>>b;
        c =trunc(log10(b)) + 1;
        int count=0;
        for(int i=0; i<c; i++)
        {
            x=a%10;
            y=b%10;
            a/=10;
            b/=10;
            if(x==y) count++;
        }
        if(count==c)cout<<"encaixa\n";
        else cout<<"nao encaixa\n";
    }
    return 0;
}
