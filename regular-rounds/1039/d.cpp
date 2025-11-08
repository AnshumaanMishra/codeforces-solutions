#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void fillDP(vector<vector<lli>>& dp, int l, int r){
    if(dp[l][r] != 0){
        return;
    }
    
}

void solve(){
    int n;
    cin >> n;
    vector<lli> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int l = 0;
    vector<lli> dprow(n, 0);
    vector<vector<lli>> dp(n, dprow);


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}