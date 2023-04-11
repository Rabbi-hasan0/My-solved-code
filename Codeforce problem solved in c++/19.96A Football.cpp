#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0,count=0,flag=0;
    for(int i=0; i<s.size(); i++)
    {
          if(s[i]=='1')
          {
                count1++;
                count=0;
          }
          else if(s[i]=='0')
          {
                count++;
                count1=0;
          }
          if(count1==7 || count==7)
          {
                flag=1;
          }
    }
    if(flag==1)
    {
          cout<<"YES\n";
    }
    else
    {
          cout<<"NO\n";
    }
return 0;
}
