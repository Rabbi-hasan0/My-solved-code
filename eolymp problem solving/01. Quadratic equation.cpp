
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int dist = b * b - 4 * a * c;

    if (dist > 0) {
        int r1 = (-b + sqrt(dist)) / (2 * a);
        int r2 = (-b - sqrt(dist)) / (2 * a);
        cout << "Two roots: " <<min(r1,r2)<<' '<<max(r1,r2)<<'\n';
    }
    else if (dist == 0) {
        int root = -b / (2 * a);
        cout << "One root: " << root << '\n';
    }
    else cout<<"No roots\n";
    
    return 0;
}
