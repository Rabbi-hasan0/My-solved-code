#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
              cin>>a[i];
        }
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
              if(a[i]==1)
                  c++;
              else if(a[i]==2)
                  d++;
        }
      if(c==0 && d%2==0)
      {
            cout<<"YES"<<endl;
      }
      else if(c%2==0 && c!=0)
            cout<<"YES"<<endl;

      else cout<<"NO"<<endl;

    }
    return 0;
}

