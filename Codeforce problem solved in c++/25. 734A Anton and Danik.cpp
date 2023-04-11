#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,x=0,y=0;cin>>n;
    string s;cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
                  x++;
            else
                  y++;
        }
       if(x>y)
            cout<<"Anton"<<endl;
       else if(x==y)
            cout<<"Friendship"<<endl;
       else
            cout<<"Danik"<<endl;
    return 0;
}
