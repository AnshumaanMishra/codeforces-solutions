#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void buildSieve(vector<bool>& sieve, int n){
    for(int i = 2; i < n + 1; i++){
        if(sieve[i]) {
            int num = i + i;
            while(num <= n) {
                sieve[num] = false;
                num += i;
            }
        }
    }
}

void solve(){
    int n, max = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] > max) {
            max = nums[i];
        }
    }
    int lim = sqrt(max) + 1;
    vector<bool> sieve(lim + 1, true);
    sieve[1] = false;

    buildSieve(sieve, lim);

    for(int i = 0; i < n; i++) {
        int k = sqrtl(nums[i]);
        if(k * k != nums[i]){
            NO;
        } else {
            int m = (int)k;
            if(sieve[m]) {
                YES;
            } else {
                // cout << 2 << endl;
                NO;
            }
        }
    }
}

int32_t main(){
	cin.tie(0)->sync_with_stdio(0);
	solve();
	return 0;
}
