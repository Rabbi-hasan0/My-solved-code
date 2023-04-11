#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
      int n,i,count=0;
      string s;
      cin>>n;
      cin>>s;
            for(int j=0; j<n-1; j++)
            {
                        if(s[j]==s[j+1])
                        {
                              count++;
                        }
            }
      cout<<count<<endl;
      return 0;
}
