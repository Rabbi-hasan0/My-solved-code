#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;int n;
        cin>>n>>s;
        int c=0,d=0;
        int len=s.size();
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i+1]==s[i+2])
                {
                    i=i+2;
                }
                else
                  d=1;
            }
    if(d==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}
