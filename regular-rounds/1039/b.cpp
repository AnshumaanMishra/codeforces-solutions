#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n;
    cin >> n;
    vector<lli> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    string s = "";
    bool toggle = false;
    int lp = 0;
    int rp = n - 1;
    int count = 0;
    while(count < n){
        if(nums[lp] > nums[rp] == toggle){
            s += "L";
            lp++;
        }
        else{
            s += "R";
            rp--;
        }
        toggle = !toggle;
        count++;
    }
    cout << s << endl;
    
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