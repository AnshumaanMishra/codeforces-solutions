#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    string s;
    cin >> s;
    // cout << s;
    int n = s.length();
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s;
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
