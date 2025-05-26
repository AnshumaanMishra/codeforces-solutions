#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        if(i == x){
            continue;
        }
        cout << i << " ";
    }
    if(x < n){
        cout << x;
    }
    cout << endl;
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