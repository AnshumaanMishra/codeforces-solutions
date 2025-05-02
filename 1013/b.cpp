#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
    int n, x;
    cin >> n >> x;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int teams = 0;
    int mult = 1;
    for(int i = n - 1; i > -1; i--){
        if(nums[i] * mult >= x){
            mult = 1;
            teams ++;
        }
        else{
            mult++;
        }
    }
    cout << teams << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}