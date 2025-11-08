#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    lli n, m;
    cin >> n >> m;
    if(n == 1 or m == 1 or (n == 2 and m == 2)){
        NO;
        return;
    }        
    YES;
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