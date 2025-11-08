#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n;
    cin >> n;
    vector<lli> nums(n);
    bool flag = false;
    lli min;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if(i == 0){
            min = nums[0];
        }
        if(nums[i] < min){
            min = nums[i];
        }
        if(nums[i] >= 2 * min){
            flag = true;
        }
    }
    if(flag){
        NO;
    }
    else{
        YES;
    }
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