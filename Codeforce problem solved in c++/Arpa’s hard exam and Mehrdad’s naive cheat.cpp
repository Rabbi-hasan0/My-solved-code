#include<bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define en <<"\n"
#define out cout<<
#define elif else if
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define for for(int i=0; i<t; i++)
using namespace std;
void solved()
{
    ll res,n;
    cin>>n;
    if(n==0)
        res=1;
    elif(n%4==0)
    res=6;
    elif(n%4==1)
    res=8;
    elif(n%4==2)
    res=4;
    else res=2;
    out res en;
}
int main()
{
    fast;
    solved();
    return 0;
}



