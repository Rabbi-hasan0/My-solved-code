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
        string s1="314159265358979323846264338327";
        int a=0;
        for(int i=0; i<s.size(); i++)
        {
              if(s1[i]==s[i]) a++;
              else break;
        }
        cout<<a<<endl;
    }

    return 0;
}

