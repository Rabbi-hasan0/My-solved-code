#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    int count=0,count1=0;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]>s[j+1])
            {
                swap(s[j],s[j+1]);
            }
        }
    }
    for(int i=0; i<s1.size(); i++)
    {
        for(int j=0; j<s1.size(); j++)
        {
            if(s1[j]>s1[j+1])
            {
                swap(s1[j],s1[j+1]);
            }
        }
    }
    for(int i=0; i<s2.size(); i++)
    {
        for(int j=0; j<s2.size(); j++)
        {
            if(s2[j]>s2[j+1])
            {
                swap(s2[j],s2[j+1]);
            }
        }
    }
    cout<<s<<endl<<s1<<endl<<s2;



    for(int i=0; i<s2.size(); i++){
     for(int j=0; j<s2.size(); j++)
    {
          if(s[i]==s2[j])
          {
                cout<<s[i];
          }
    }
    }





    return 0;
}
