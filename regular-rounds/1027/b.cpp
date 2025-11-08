#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int zeros = 0;
    int ones = 0;

    for(int i = 0; i < n; i++){
        zeros += (s[i] == '0');
        ones += (s[i] == '1');
    }
    // cout << ones << " " << zeros << " " << k << endl;
    int leftz = zeros - n / 2 + k; 
    int lefto = ones - n / 2 + k; 
    // cout << "leftz: " << leftz
    //      << " lefto: " << lefto
    //      << " zeros: " << zeros
    //      << " ones: " << ones
    //      << " k: " << k
    //      << endl;
    if((leftz >= 0 and lefto >= 0) and (leftz / 2 + lefto / 2 >= k)){
        YES;
        return; 
    }
    NO;

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