#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int a = 0;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp <= x){
            a++;
        }
    }
    for(int i = 0; i < m; i++){
        cin >> temp;
        if(temp <= y){
            a++;
        }
    }
    cout << (n + m) << endl;
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