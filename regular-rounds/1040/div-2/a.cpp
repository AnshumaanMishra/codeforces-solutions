#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    int zeros = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] == 0){
            zeros++;
        }
        sum += nums[i];
    }
    sum += zeros;
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