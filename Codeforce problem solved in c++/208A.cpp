/* header file */
#include<bits/stdc++.h>
#include<stack>
#include <queue>
#include <algorithm>
#include<iostream>
#include<string>
/* for faster cin cout */
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
/* sort function */
#define strsort() sort(s.begin(),s.end())
#define arrsort() int n1=sizeof(a)/sizeof(a[0]);sort(a,a+n1)
/* legth function */
#define strlen s.size()
#define arrlen int n1=sizeof(a)/sizeof(a[0])
#define intlen int n2=trunc(log10(n))+1
/* Conver function */
#define csti int csti=stoi(s)
/* Others Sortcut */
#define PI 3.1415926535897932384626433832795
#define nn "\n"
#define yes "YES"
#define no "NO"
#define case "Case "
#define elif else if
#define ll long long
#define lli long long int
#define pb push_back
/* testcase */
#define test() int t;cin>>t;while(t--)
#define testt() int t;cin>>t;for(int i=1; i<=t; i++)
#define f(i,n) for(lli i = 0; i < n; i++)
using namespace std;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 10;
//const int MOD = 1e9 + 7;
/*  let's started  */
int a[N],b[N];
void solved()
{
  string s,s1;cin>>s;
  int c=0,x=0;
  f(i,s.size())
  {
    //cout<<i<<nn;
    if(s[i]=='W'&& s[i+1]=='U'&&s[i+2]=='B')
    {
      i+=2;
      s1+=' ';
    }
    else
    {
      s1+=s[i];
    }
  }
  cout<<s1<<nn;
}
int main()
{
    fast();
    solved();
    return 0;
}