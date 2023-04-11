#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,c1=0,c2=0,c3=0,c4=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1') c1++;
        if(s[i]=='2') c2++;
        if(s[i]=='3') c3++;
        if(s[i]=='4') c4++;
    }
    cout<<(c1*a1)+(c2*a2)+(c3*a3)+(c4*a4)<<endl;
    return 0;
}

/*while(cin>>a>>b>>c>>d)
    {
        cin>>s;
        ans=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
                ans+=a;
            else if(s[i]=='2')
                ans+=b;
            else if(s[i]=='3')
                ans+=c;
            else if(s[i]=='4')
                ans+=d;
        }
        cout<<ans<<endl;
    }*/
