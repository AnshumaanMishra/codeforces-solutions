#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n;
    cin >> n;
    lli sum = 0;
    for(lli i = 1; i < n + 1; i++){
        sum += abs(n - 2 * i + 1);
    }
    cout << sum / 2 + 1 << endl;
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