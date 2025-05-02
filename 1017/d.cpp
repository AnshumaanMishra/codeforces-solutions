#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve() {
    string s1, s2;
    cin >> ws;  // consume any leading whitespace
    getline(cin, s1);
    cin >> ws;
    getline(cin, s2);

    vector<pair<char, int>> a, b;

    // Run-Length Encoding for s1
    for (char c : s1) {
        if (a.empty() || a.back().first != c)
            a.emplace_back(c, 1);
        else
            a.back().second++;
    }

    // Run-Length Encoding for s2
    for (char c : s2) {
        if (b.empty() || b.back().first != c)
            b.emplace_back(c, 1);
        else
            b.back().second++;
    }

    if (a.size() != b.size()) {
        cout << "NO\n";
        return;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i].first != b[i].first || a[i].second > b[i].second || a[i].second * 2 < b[i].second) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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