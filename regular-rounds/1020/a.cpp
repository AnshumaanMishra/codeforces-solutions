#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int ones = 0;
    for(int i = 0; i < n; i++){
        ones += (s[i] == '1');
    }
    cout << ones * (ones - 1) + (n - ones) * (ones + 1) << endl;
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