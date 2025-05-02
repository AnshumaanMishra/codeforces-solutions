#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, k;
    cin >> n >> k;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums, nums + n);

    int l = n / 3;
    int r = (2 * n) / 3;

        

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