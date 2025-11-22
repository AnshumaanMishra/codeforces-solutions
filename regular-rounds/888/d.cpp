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
  vector<int> sums(n - 1), nums(n + 1, 0);
  for (int i = 0; i < n - 1; i++) {
    cin >> sums[i];
  }
  int totsum = (n * (n + 1)) / 2;
  if(totsum - sums[n - 2] > n) {
    NO;
    return;
  }
  int flag = -1;
  if(sums[0] > n) {
    flag = sums[0];
  } else {
    nums[sums[0]]++;
  }
  for(int i = 1; i < n - 1; i++) {
    int cur = sums[i] - sums[i - 1];
    if(cur > n) {
      flag = cur;
    } else {
      nums[cur]++;
      if(nums[cur] > 1) {
        flag = cur;
      }
    }
  }
  // for(auto x : sums){
	 // cout << x << " ";
  // }
  // cout << endl;

  // for(auto x : nums){
	 // cout << x << " ";
  // }
  // cout << endl;


  vector<int> missing;
  for(int i = 1; i <= n; i++) {
    if(nums[i] == 0){
      missing.push_back(i);
    }
  }
  // cout << mis1 << " " << mis2 << endl;
  if(missing.size() == 1) {
    YES;
    return;
  } else if (missing.size() == 2) {
    if(missing[0] + missing[1] == flag) {
      YES;
    } else {
      NO;
    }
    return;
  } else {
    NO;
    return;
  }
  // cout << endl;

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
