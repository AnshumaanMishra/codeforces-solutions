#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    if(k % 2 == 1){
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0) {
                cout << (nums[i] + k) << " ";
            }
            else{
                cout << (nums[i]) << " ";
            }
        }
    }
    else {
        int mod = k + 1;
        for(int i = 0; i < n; i++) {
            if(nums[i] % mod == 0) {
                cout << (nums[i]) << " ";
            }
            else {
                int rem = nums[i] % mod;
                cout << (nums[i] + k * (rem)) << " ";
            }
        }
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