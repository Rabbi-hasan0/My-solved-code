#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,positive=0,negative=0,x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>0)
            positive+=x;
        else
        {
            if(positive<1) negative++;
            else positive--;
        }
    }
cout<<negative<<endl;
    return 0;
}

