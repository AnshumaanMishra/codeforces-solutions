#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define INF lli(1e13)

lli maxSubarraySum(vector<lli> &arr) {
    lli res = arr[0];
    lli maxEnding = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

void solve(){
    lli n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<lli> nums;
    lli temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    int index = -1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            if(index == -1){
                index = i;
                nums[i] = -INF;
            }
            else{
                nums[i] = -INF;
            }
        }
    }
    lli l = -100000000000000000LL;
    lli h = 100000000000000000LL;
    lli mid, s1;
    int place = 0;
    s1 = maxSubarraySum(nums);
    if(index == -1){
        if(s1 != k){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
            for(auto x : nums){
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }
    else if(s1 > k){
        cout << "No" << endl;
    }
    while(l < h){
        mid = (l + h) / 2;
        nums[index] = mid;
        s1 = maxSubarraySum(nums);
        if(s1 == k){
            break;
        }
        if(s1 > k){
            h = mid;
        }
        else{
            l = mid + 1;
        }
        // cout << s1 << " " << mid << " " << l << " " << h << endl;
        // if(abs(mid) == 99999999999999999LL){
        //     break;
        // }
        if(mid == (l + h) / 2){
            place++;
            if(place >= 3){
                break;
            }
        }
        // cin >> place;
    }
    if(s1 == k){
        cout << "Yes" << endl;
        for(auto x : nums){
            cout << x << " ";
        }
        cout << endl;
    }
    else{
        cout << "No" << endl;
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