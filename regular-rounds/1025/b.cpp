#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

lli max(lli a, lli b){
    if(a > b){
        return a;
    }
    return b;
}

lli min(lli a, lli b){
    if(a < b){
        return a;
    }
    return b;
}

void solve(){
    lli n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << "ANS = " << ceil(log(n) / log(2)) + ceil(log(m) / log(2)) << endl;   
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