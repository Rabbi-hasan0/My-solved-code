#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        int r1 = (-b + sqrt(discriminant)) / (2 * a);
        int r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two roots: " <<min(r1,r2)<<' '<<max(r1,r2)<<'\n';
    }
    else if (discriminant == 0) {
        int root = -b / (2 * a);
        cout << "One root: " << root << '\n';
    }
    else cout<<"No roots\n";
    return 0;
}
