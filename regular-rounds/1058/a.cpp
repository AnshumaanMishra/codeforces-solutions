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
    vector<int> map(101, 0);

    for(auto x : nums) {
        map[x]++;
    }
    for(int i = 0; i < 101; i++) {
        if(map[i] == 0) {
            cout << i << endl;
            return;
        }
    }
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
