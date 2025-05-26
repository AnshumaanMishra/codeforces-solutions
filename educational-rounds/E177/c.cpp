#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

int fix(vector<int>& nums, vector<int>& map, int k){
    int key = map[k];
    if(key == -1){
        map[k] = k;
        nums[k] = k;
        return 1;
    }
    else{
        map[k] = k;
        nums[k] = k;
        return 1 + fix(nums, map, key);
    }
}

void solve(){
    int n; 
    cin >> n;
    vector<int> map(n + 1, -1);
    vector<int> nums;
    nums.push_back(-100);
    int temp;
    for(int i = 1; i < n + 1; i++){
        cin >> temp;
        nums.push_back(temp);
        map[temp] = i;
    }
    vector<int> map2;
    vector<int> nums2;
    int queries = n;
    int q;
    int sum = 0;
    while(queries--){
        sum = 0;
        cin >> q;
        int key = nums[q];
        nums[q] = 0;
        map[key] = -1;
        map2 = map;
        nums2 = nums;
        for(int i = 1; i < n + 1; i++){
            if(nums2[i] == 0){
                sum += fix(nums2, map2, i);
            }
        }
        cout << sum << " ";
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