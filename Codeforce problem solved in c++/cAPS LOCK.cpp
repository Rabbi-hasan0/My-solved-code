#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0,b=0,d;
    for(int i=1; i<s.size(); i++)
    {
        if(islower(s[i]))
        {
            a++;
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            b++;
        }
    }
    if(islower(s[0])&&a==0)
    {
        for(int i=1; i<s.size(); i++)
        {
            s[i]=towlower(s[i]);
            s[0]=towupper(s[0]);
        }
        cout<<s<<endl;
        return 0;
    }
    if(b==s.size())
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]==towlower(s[i]);
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}

