#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

lli f(int k, vector<lli>& a, int l, int r){
    lli ans = 0;
    for(int i = l; i <= r; i++){
        while(k % a[i] == 0){
            k = k / a[i];
        }
        ans += k;
    }
    return ans;
}

void solve(){
    int n, q;
    cin >> n >> q;
    vector<lli> nums;
    lli temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    while(q--){
        int k, l, r;
        cin >> k >> l >> r;
        cout << f(k, nums, l - 1, r - 1) << endl;
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