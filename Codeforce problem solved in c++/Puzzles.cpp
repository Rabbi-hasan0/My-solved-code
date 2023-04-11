#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
      int n,m; cin>>n>>m;
      int arra[m];

      for(int i=0; i<m; i++)
      {
            cin>>arra[i];


            for(int j=0; j<m; j++)
            {
                  if(arra[j]>arra[j+1])
                  {
                        sort(arra[j],arra[j+1]);
                  }
            }
            cout<<arra[i];
      }



      return 0;
}
