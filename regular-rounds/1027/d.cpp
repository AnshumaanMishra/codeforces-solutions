#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n;
    cin >> n;
    int x, y;
    int m = 0, n = 0;
    vector<pair<int, int>> coords(n);
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        coords[i] = pair<int, int>(x, y);
        if(x > m){
            m = x;
        }
        if(y > n){
            n = y;
        }
    }

    int midX = m / 2, midY = n / 2;
    int maxDistIdx = -1;
    double maxDist = -1.0;
    for (int i = 0; i < coords.size(); ++i) {
        int dx = coords[i].first - midX;
        int dy = coords[i].second - midY;
        double dist = sqrt(dx * dx + dy * dy);
        if (dist > maxDist) {
            maxDist = dist;
            maxDistIdx = i;
        }
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