#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, k;
    cin >> n >> k;
    lli nums[n], nums2[n];
    lli sum = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        nums2[i] = nums[i];        
    }
    sort(nums, nums + n);
    if(k == 1){
        if(nums[n - 1] == nums2[0] or nums[n - 1] == nums2[n - 1]){
            cout << nums[n - 1] + nums[n - 2] << endl;
        }
        else{
            cout << nums[n - 1] + ((nums2[0] > nums2[n - 1]) ? nums2[0] : nums2[n - 1]) << endl;
        }
        return;
    }
    for(int i = 0; i < k + 1; i++){
        if(n - i - 1 < 0){
            break;
        }
        sum += nums[n - i - 1];
    }

    cout << sum << endl;
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