#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n; 
    cin >> n;
    vector<lli> nums;
    vector<lli> map(30, 0);
    lli temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
        int j = 0;
        while(temp > 0){
            map[j] += temp & 1;
            j++;
            temp >>= 1;
        }
    }
    // for(int i = 0; i < map.size(); i++){
    //     cout << i << " : " << map[i] << endl;
    // }
    lli max = 0;
    for(int k = 0; k < n; k++){
        lli sum = 0;
        lli x = nums[k];
        int i = 0;
        while(i < 30){
            int bit = x & 1;
            if(bit){
                sum += (n - map[i]) << i;
            }
            else{
                sum += map[i] << i;
            }
            x >>= 1;
            i++;
        }
        // cout << k << " : " << sum << endl;
        if(sum > max){
            max = sum;            
        }
    }
    cout << max << endl;
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