#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void calcR(vector<int>& nums, lli* r){
    for(int i = 0; i < nums.size(); i++){
        *r = *r + (i + 1) * nums[i];
    }
}

void solve(){
    int q;
    cin >> q;
    lli r = 0;
    vector<int> nums;
    int op;
    int sum = 0;
    int num;
    while(q--){
        cin >> op;
        if(op == 3){
            cin >> num;
            sum += num;
            nums.push_back(num);
            r += num * nums.size();
        }
        else if (op == 2){
            for(int i = 0; i < nums.size() / 2; i++){
                r -= nums[nums.size() - i - 1] * (nums.size() - 2 * i - 1);
                r += nums[i] * (nums.size() - 2 * i - 1);
                int temp = nums[i];
                nums[i] = nums[nums.size() - i - 1];
                nums[nums.size() - i - 1] = temp;
            }
                // calcR(nums, &r);
        }
        else{
            int n = nums[nums.size() - 1];
            nums.pop_back();
            nums.insert(nums.begin(), n);
            r += sum - n * nums.size();
        }
        cout << r << endl;
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