#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, k;
    cin >> n >> k;
    if(n <= k){
        cout << 1 << endl;
        return;
    }
    if(n % 2 == 0){
        lli answer = (n / (k - k % 2));
        answer += (n % (k - k % 2) != 0);
        cout << answer << endl;
        return;
    }
    if(n % 2 != 0){
        n -= k - (k % 2 == 0);
        lli answer = (n / (k - k % 2)) + (n % (k - k % 2) != 0) + 1;
        cout << answer << endl;
        return;
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