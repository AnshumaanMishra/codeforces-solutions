#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n, temp;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (i == 0) {
            nums[i] = temp;
        } else {
            if(i % 2 == 0) {
                nums[i] = nums[i - 1] + temp;
            } else {
                nums[i] = nums[i - 1] - temp;
            }
        }
    }

    sort(nums.begin(), nums.end());

    if(nums[0] == 0) {
        YES;
        return;
    }
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i - 1] or nums[i] == 0) {
            YES;
            return;
        }

    }
    NO;
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
