#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,calculate;
    cin >> n;
    if(n%2 == 0)
    {
       calculate= n/2;
    }
    else
    {
        calculate= ((n/2)+1)*(-1);
    }
    cout << calculate << endl;
    return 0;
}
