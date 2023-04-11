#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=towlower(s[i]);
    }
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            x++;
        }
    }
    if(x==26)
            cout<<"YES"<<endl;
            else
                cout<<"NO\n";
                return 0;
    }

