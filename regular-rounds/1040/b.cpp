#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    lli n, s;
    cin >> n >> s;
    vector<lli> nums(n);
    lli totalSum = 0;
    bool flag = false;
    lli zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        totalSum += nums[i];
        zero += (nums[i] == 0);
        one += (nums[i] == 1);
        two += (nums[i] == 2);
    }

    if(s < totalSum){
        for(auto x : nums){
             cout << x << " ";
        }
        cout << endl;
    }
    else if(s == totalSum or s - totalSum != 1){
        cout << -1 << endl;
    }
    else{
        for(int i = 0; i < zero; i++){
            cout << 0 << " ";
        }
        for(int i = 0; i < two; i++){
            cout << 2 << " ";
        }
        for(int i = 0; i < one; i++){
            cout << 1 << " ";
        }
        cout << endl;
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