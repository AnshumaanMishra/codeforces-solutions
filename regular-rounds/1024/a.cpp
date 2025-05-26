#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, m, p, q;
    cin >> n >> m >> p >> q;
    int mod1 = n % p;
    int quot1 = n / p;
    int reqsum = m - q * (quot1);
    // cout << mod1 << " " << quot1 << " " << reqsum << endl;
    if(mod1 == 0 and reqsum != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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