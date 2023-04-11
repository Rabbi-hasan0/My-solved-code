#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        long long sum = 0;
        int m=0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] < 0) {
                m++;
                a[i] = -a[i];
            }
            sum+=a[i];
        }
        sort(a.begin(), a.end());
        if(m%2!=0) sum -= 2 * a[0];
        cout << sum << "\n";
    }
}

