#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int count=0,c=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==1) count++;
            if(a[i]>1) c++;
        }
        if(count%2==0) cout<<(count/2)+c<<endl;
        else cout<<((count/2)+1)+c<<endl;
    }
    return 0;
}

