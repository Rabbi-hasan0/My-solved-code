#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c5=0,c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;


        for(int j=0; j<1; j++)
        {
            if(s[0]=='I')
            {
                c1++;
            }
            if(s[0]=='C')
            {
                c2++;
            }
            if(s[0]=='T')
            {
                c3++;
            }
            if(s[0]=='O')
            {
                c4++;
            }
            if(s[0]=='D')
            {
                c5++;
            }
        }
    }
    cout<<(c1*20)+(c2*6)+(c3*4)+(c4*8)+(c5*12)<<endl;

    return 0;
}

