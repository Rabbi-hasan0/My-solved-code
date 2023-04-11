#include<iostream>
#include<string>
using namespace std;
int main()
{
      string s,a;cin>>s>>a;
      for(int i=0; i<s.size(); i++)
      {
            if(s[i]==a[i])
            {
                  cout<<"0";
            }
            else
            {
                  cout<<"1";
            }
      }
    return 0;
}
