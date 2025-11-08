#include <bits/stdc++.h>
using namespace std;

// #define int long long;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    lli n, c;
    cin >> n >> c;
    vector<lli> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // cout << endl;
    sort(nums.begin(), nums.end());
    int lb = lower_bound(nums.begin(), nums.end(), c) - nums.begin();
    int count = 0;
    while(lb > 0){
        count++;
        if(nums[lb] == c){
            nums[lb] = INT_MAX;
        }
        else{
            nums[lb - 1] = INT_MAX;
        }
        for(int i = 0; i < lb; i++){
            nums[i] *= 2;
        }
        lb = lower_bound(nums.begin(), nums.begin() + lb, c) - nums.begin();
        // for(auto x : nums){
        //      cout << x << " ";
        // }
        // cout << endl;
        
    }
    if(lb == 0){
        if(nums[0] <= c){
            count++;
        }
    }
    cout << n - count << endl;
    
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