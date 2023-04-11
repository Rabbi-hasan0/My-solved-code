#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a],m=1,count=0;
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
      if(arr[i]>=arr[i-1])
        {
            count++;

            m=max(m,count);
        }
        else
        count=1;
    }
    cout<<m<<endl;
    return 0;
}


