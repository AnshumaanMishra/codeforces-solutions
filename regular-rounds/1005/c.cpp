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
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  vector<int> pre(n, 0), post(n, 0);
  if(nums[0] > 0) {
    pre[0] = nums[0];
  }
  if(nums[n - 1] < 0) {
    post[n - 1] = -nums[n - 1];
  }

  for(int i = 1; i < n; i++){
    pre[i] = pre[i - 1];
    if(nums[i] > 0) {
      pre[i] += nums[i];
    }
  }
  for(int i = n - 2; i > -1; i--){
    post[i] = post[i + 1];
    if(nums[i] < 0) {
      post[i] += -nums[i];
    }
  }

  int maxN = 0;
  for(int i = 0; i < n; i++) {
    maxN = max(maxN, pre[i] + post[i]);
  }
  cout << maxN << endl;
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
