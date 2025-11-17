#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
  int n;
  cin >> n;
  if(n % 2 == 0) {
    NO;
    return;
  }
  int target_sum = 3 * (n + 1) / 2;
  YES;
  vector<bool> used(2 * n + 1, false);
  used[0] = true;
  for(int i = 1; i <= 2 * n; i += 2) {
    // cout << "DBG: ";
    // cout << i << " " << target_sum << endl;
    if(target_sum - i <= 2 * n and !used[i] and !used[target_sum - i] and i != target_sum - i) {
      cout << i << " " << target_sum - i << endl;
      used[i] = true;
      used[target_sum - i] = true;
      target_sum++;
    }
  }

  for(int i = 2; i <= 2 * n; i += 2) {
    // cout << "DBG: ";
    // cout << i << " " << target_sum << endl;
    if(target_sum - i <= 2 * n and !used[i] and !used[target_sum - i] and i != target_sum - i) {
      cout << i << " " << target_sum - i << endl;
      used[i] = true;
      used[target_sum - i] = true;
      target_sum++;
    }
  }
  // for(auto x : used) {
    // cout << x << " ";
  // }
  // cout << endl;
  return;
}
int32_t main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

