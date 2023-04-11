#include<iostream>
#include<string>
using namespace std;
int main()
{
      string n;
      cin>>n;
      int count=0,c=0;
     for(int i=0; i<n.size(); i++)
     {
           if(n[i]>='A' && n[i]<='Z')
           {
                 count++;
           }
           else
           {
                 c++;
           }
     }
     if(count<c || count==c)
     {
           for(int i=0; i<n.size(); i++)
           {
                 n[i]=towlower(n[i]);
           }
           cout<<n<<endl;
     }
     else
     {
        for(int i=0; i<n.size(); i++)
           {
                 n[i]=towupper(n[i]);
           }
           cout<<n<<endl;
     }
      return 0;
}
