#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a, s;
    cin>>s;
    int i,j,k,x=0,y=0,count=0,count1=0,count2=0,count4=0;

    for(k=0; k<s.size(); k++)
    {
        if(isupper(s[k]))
        {
            count2++;
        }
        else if(islower(s[i]))
        {
            count4++;
        }
        x++;
    }
    if(count2==x)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=towlower(s[i]);
        }
        cout<<s<<endl;
        return 0;
    }

    for(j=0; j<s.size(); j++)
    {
        if(islower(s[0]))
        {
            count++;
            break;
        }
    }
    for(i=1; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            count1++;
        }
        y++;
    }
    if(count==1 && count1==y)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=towlower(s[i]);
            s[0]=towupper(s[0]);
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}
