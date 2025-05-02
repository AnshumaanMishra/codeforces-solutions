#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

bool checkMex(vector<int>& nums, int mex, int k){
    if(mex == 0 and k == 2 and nums[0] == 0 and nums[nums.size() - 1] == 0){
        return false;
    }
    else if(mex == 0){
        return true;
    }
    set<int> pool;
    int part = 0;
    for(int i = 0; i < nums.size(); i++){
        pool.insert(nums[i]);
        if(pool.size() >= mex and *next(pool.begin(), mex) == mex - 1){
            part++;
            pool.clear();
        }
    }
    if(pool.size() >= mex and *next(pool.begin(), mex) == mex - 1){
        // return false;
        part ++;
    }
    if(part < k){
        return false;
    }
    return true;
}

void solve(){
    // cout << endl;
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    int cmex = 0;
    int l = 0, h = n / k;
    int mex = (l + h) / 2;
    while(l < h){
        int mex = (l + h) / 2;
        // cout << l << " " << h << " " << mex << endl;
        if(!checkMex(nums, mex, k)){
            cmex = mex;
            l = mex + 1;
        }
        else{
            h = mex;
        }
    }
    cout << "Ans = " << l << endl; 
    // cout << endl;
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