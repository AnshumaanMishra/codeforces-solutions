#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7 + 1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve() {
  int n;
  cin >> n;
  vector<int> nums(n);
  vector<char> x(n, '0');
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  string s;
  cin >> s;
  if (s[0] == '1' or s[n - 1] == '1') {
    cout << -1 << endl;
    return;
  }
  int pos1 = 0, posN = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      pos1 = i;
    }
    if (nums[i] == n) {
      posN = i;
    }
  }
  if (s[pos1] == '1' or s[posN] == '1') {
    cout << -1 << endl;
    return;
  }
  cout << 5 << endl;
  cout << 1 << " " << pos1 + 1 << endl;
  cout << pos1 + 1 << " " << n << endl;
  cout << 1 << " " << posN + 1 << endl;
  cout << posN + 1 << " " << n << endl;
  if(pos1 <= posN){
    cout << pos1 + 1 << " " << posN + 1 << endl;
  } else {
    cout << posN + 1<< " " << pos1 + 1 << endl;
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
