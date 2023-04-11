#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0,d=0;
        int len=s.size();
        if(len==1)
        {
            if(s=="Y"||s=="e"||s=="s")
            {
                d=1;
            }
        }
        if(len==2)
        {
            for(int i=0; i<len-1; i++)
            {
                if(s[i]=='Y'&&s[i+1]=='e'||s[i]=='e'&&s[i+1]=='s'||s[i]=='s'&&s[i+1]=='Y')
                {
                    d=1;
                }
            }
        }
        if(len>=3)
        {
            for(int i=0; i<len-1; i++)
            {
                if(s[i]=='Y'&&s[i+1]=='e'&&s[i+2]=='s'||s[i]=='e'&&s[i+1]=='s'&&s[i+2]=='Y'||s[i]=='s'&&s[i+1]=='Y'&&s[i+2]=='e')
                {
                    c++;
                    if(c==len-2)
                    {
                        d=1;
                    }
                }
            }
        }
    if(d==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}

