#include<bits/stdc++.h>
using namespace std;
void sorts(string & s)
{
    sort(s.begin(),s.end());
}
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    sorts(a);
    sorts(b);
    sorts(c);
    d=a+b;
    sorts(d);
    //int res = d.compare(c);
    if (d== c) cout << "YES" <<endl;
    else cout<<"NO"<<endl;

    return 0;
}


