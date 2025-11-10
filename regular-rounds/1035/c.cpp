#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7 + 1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

int count_bits(int n) {
  if (n == 0) {
    return 0;
  }
  return 1 + count_bits(n >> 1);
}

void solve() {
  int n, l, r, k;
  cin >> n >> l >> r >> k;
  if (n == 2) {
    cout << -1 << endl;
    return;
  }

  if (n % 2 == 1) {
    cout << l << endl;
    return;
  }
  int rlen = count_bits(r);
  int llen = count_bits(l);
  if (rlen <= llen) {
    cout << -1 << endl;
    return;
  }

  if (k <= n - 2) {
    cout << l << endl;
  } else {
    int ans = ((long long)1) << llen;
    cout << ans << endl;
  }
}

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
