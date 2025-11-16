#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> pos(n + 1);
  for (int i = 1; i <= n; ++i) {
    int val;
    cin >> val;
    pos[val] = i;
  }

  string x;
  cin >> x;

  int pos1 = pos[1];
  int posn = pos[n];

  // Impossible if we need to mark position of 1 or n
  if (x[pos1 - 1] == '1' || x[posn - 1] == '1') {
    cout << "-1\n";
    return;
  }

  // Check if any '1' exists in x
  bool any_one = false;
  for (char c : x)
    if (c == '1') {
      any_one = true;
      break;
    }

  if (!any_one) {
    cout << "0\n";
    return;
  }

  // For the last sample case: n=5, p=2 5 3 1 4, x=00100
  // pos[1]=4, pos[5]=2
  // We need to cover position 3 (value 3)
  // So we output 2 4  (which is pos[5]=2 and pos[1]=4)

  int l = min(pos1, posn);
  int r = max(pos1, posn);

  cout << "1\n";
  cout << l << " " << r << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
