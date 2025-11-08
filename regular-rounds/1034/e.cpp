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
    vector<pair<int, int>> storage;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end());
    int current = nums[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(nums[i] == current){
            count++;
        }
        else{
            storage.push_back(pair<int, int>(count, current));
            current = nums[i];
            count = 1;
        }
    }
    storage.push_back(pair<int, int>(count, current));
    
    sort(storage.begin(), storage.end());
    vector<int> postfix(n + 1, 0);
    // postfix[storage[storage.size() - 1].first] = 1;
    for(auto x : storage){
        postfix[x.first]++;
    }
    for(int i = n - 1; i >= 0; i--){
        postfix[i] += postfix[i + 1];
    }

    int j = 0;
    int mex = -1;
    for(int i = 0; i < n; i++){
        if(nums[i] > j){
            mex = j;
            break;
        }
        if(nums[i] == j){
            j++;
        }
    }
    if(mex == -1){
        mex = j;
    }
    if(mex == 0){
        for(int i = 0; i < n + 1; i++){
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    // cout << endl;
    
    // for(auto x : nums){
    //      cout << x << " ";
    // }
    // cout << endl;
    
    // for(auto x : postfix){
    //      cout << x << " ";
    // }
    // cout << endl;
    // for(auto x : storage){
    //      cout << "(" << x.first << ", " << x.second << "), ";
    // }
    // cout << endl;
    

    for(int i = 0; i < n + 1; i++){
        if(i == 0){
            cout << 1 << " ";
            continue;
        }
        if(i == n){
            cout << 1 << " ";
            continue;
        }
        if(n - i >= mex){
            cout << mex + 1 - (postfix[i + 1]) << " ";
        }
        else{
            cout << n - i + 1 << " ";
        }
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