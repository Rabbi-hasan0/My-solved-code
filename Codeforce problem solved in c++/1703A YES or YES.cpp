#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;cin>>t;
   string s;
   while(t--)
   {
         cin>>s;
         for(int i=0; i<3; i++)
         {
            s[i]=tolower(s[i]);
         }
         string a="yes";
        if(s==a) cout<<"YES\n";
        else cout<<"NO\n";
   }
    return 0;

}

