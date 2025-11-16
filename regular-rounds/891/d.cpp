#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
  int n, a;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  int max = -100000000007;
  for(int i = 0; i < n; i++){
    cin >> a;
    nums[i] -= a;
    if(nums[i] > max) {
      max = nums[i];
    }
  }
  vector<int> answers;
  for(int i = 0; i < n; i++){
    if(nums[i] == max) {
      answers.push_back(i + 1);
    }
  }

  cout << answers.size() << endl;
  for(auto x : answers) {
    cout << x << " ";
  }
  cout << endl;

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


