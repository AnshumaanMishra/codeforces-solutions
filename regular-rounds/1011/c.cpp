#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli x, y;
    cin >> x >> y;
    if(x == y){
        cout << -1 << endl;
    }
    else if(x > y){
        int bits = 1;
        lli z = x;
        while(z >>= 1){
            // cout <<  "Z = " << z << endl;
            bits++;
        }
        // cout << bits << endl;
        lli ans = ((lli)1 << (bits + 1)) - x;
        cout << ans << endl;
    }
    else{
        int bits = 1;
        lli z = y;
        while(z >>= 1){
            bits++;
        }
        // cout << bits << endl;
        lli ans = ((lli)1 << (bits + 1)) - y;
        cout << ans << endl;
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