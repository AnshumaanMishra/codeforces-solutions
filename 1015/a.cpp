#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << -1 << endl;
        return;
    }
    cout << n << " " << 2 << " " << 1 << " ";
    for(int i = 3; i < n; i++){
        cout << i << " ";
    }
    cout << endl;
    return;
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