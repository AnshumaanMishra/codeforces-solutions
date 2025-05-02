#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int diff = n - m;
    int r2 = r - diff;
    if(r2 < 0){
        l += -r2;
        r2 = 0;
    }
    cout << l << " " << r2 << endl;
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