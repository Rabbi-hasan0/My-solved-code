/*
problem: Given an array of n integers, find the sum of ai × aj for all 1≤i<j≤n.
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
int prefix_sum[N];
int suffix_sum[N];

int main() {
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  /* Using prefix sum:
  for (int i = 1; i <= n; i++) {
    prefix_sum[i] =prefix_sum[i-1]+a[i];
  }
  int total_sum = 0;
  for (int i = 1; i <= n; i++) {
    total_sum += a[i];
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int sum = a[i] *(total_sum - prefix_sum[i]);
    ans += sum;
  }*/

  //Using suffix sum:
  for (int i = n; i >= 1; i--) {
  suffix_sum[i] = suffix_sum[i + 1] + a[i];
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int sum = 0;
    sum = a[i] * suffix_sum[i + 1];
    ans += sum;
  }
  cout << ans << '\n';


  return 0;
}
