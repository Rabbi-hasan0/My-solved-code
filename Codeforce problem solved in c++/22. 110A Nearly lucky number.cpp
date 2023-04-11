#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c3=0,c2=0,c1=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4'|| s[i]=='7')
        {
            c2++;
        }
    }
    if (c2==4 || c2== 7)
    {
          cout<<"YES\n";
    }
    else
    {
          cout<<"NO\n";
    }
    return 0;
}


