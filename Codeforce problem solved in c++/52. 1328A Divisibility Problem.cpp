#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
        {
              cout<<"0"<<endl;
        }
      else if(a>b)
      {
          int x=0;
        x=a%b;
        cout<<b-x<<endl;
      }
        else
        {
            cout<<b-a<<endl;
        }
    }
    return 0;
}
/*=========================================
##Time limit exeed##
---------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        int x=0;
        cin>>a>>b;
        for(int i=1; i<=sqrt(b); i++)
        {
            if(a%b==0)
            {
                x=0;
                break;
            }
              x++;
            if ((a+i)%b==0)
            {
                break;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}*/
