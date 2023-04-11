#include<iostream>
#include<string>
using namespace std;
main()
{
    string t, s;
    t="hello";
    cin>>s;
    int j=0,x=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==t[j])
        {
            j++;
            x++;
            if(x==5)
            {
                break;
            }
        }
    }
    if(x==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

