#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    if(n % 2 == 0) {
        if(b % 2 != 0) {
            NO;
            return;
        }
        else if(a % 2 != 0 and a > b) {
            NO;
            return;
        }
        YES;
    }
    else {
        if(b % 2 == 0) {
            NO;
            return;
        }
        else if(a % 2 == 0 and a > b) {
            NO;
            return;
        }
        YES;
    }
}

int32_t main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}