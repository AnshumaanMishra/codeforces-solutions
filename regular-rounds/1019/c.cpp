#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, k;
    cin >> n >> k;
    vector<lli> nums;
    vector<lli> prefix(n, 0);
    vector<lli> suffix(n, 0);
    int temp;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back((temp <= k) ? 1 : -1);
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            prefix[i] = nums[0];
            suffix[n - 1] = nums[n - 1];
        }
        else{
            prefix[i] = prefix[i - 1] + nums[i];
            suffix[i] = suffix[n - i] + nums[n - i - 1];
        }
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