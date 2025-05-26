#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<int> nums(2 * n, 0);
    int sum = 0;
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> temp;
            if(nums[i + j + 1] != temp){
                nums[i + j + 1] = temp;
                sum += nums[i + j + 1];
            }
        }
    }
    nums[0] = (2 * n) * (2 * n + 1) / 2 - sum;
    for(int i = 0; i < 2 * n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
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