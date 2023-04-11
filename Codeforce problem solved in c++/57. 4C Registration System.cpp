#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int>reg;    //Used maping function for string compare;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(reg[s]==0)
        {
            reg[s]=1;
            cout<< "OK"<<endl;
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
    return 0;
}
