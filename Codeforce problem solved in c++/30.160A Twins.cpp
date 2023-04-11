#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    int y=0,z=0,sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        y+=a[i];
    }
    y=y/2;
    sort(a,a+n);
    for(int j=n-1; j>=0; j--)
    {
        sum+=a[j];
        z++;
        if(y<sum)break;
    }
    cout<<z<<endl;
    return 0;
}
