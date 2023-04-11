#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main()
{
    string s,m;
    cin>>s>>m;

    reverse(s.begin(),s.end());

    if(s==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
