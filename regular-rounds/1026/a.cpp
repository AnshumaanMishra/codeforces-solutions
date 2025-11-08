#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int l = 0;
    int r = n - 1;
    int count = 0;
    while((nums[l] + nums[r]) % 2 != 0){
        l++;
        count ++;
    }
    int count2 = 0;
    l = 0;
    while((nums[l] + nums[r]) % 2 != 0){
        r--; 
        count2++;
    }
    cout << ((count > count2) ? count2 : count) << endl;

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