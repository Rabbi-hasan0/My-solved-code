#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
          if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
          {
                cnt++;
          }
    }
    if(cnt>0)
    {
          cout<<"YES"<<endl;
    }
    else
    {
          cout<<"NO"<<endl;
    }
    return 0;
}
