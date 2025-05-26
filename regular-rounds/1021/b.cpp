#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, k, temp;
    cin >> n >> k;
    vector<int> bars;
    for(int i = 0; i < n; i++){
        cin >> temp;
        bars.push_back(temp);
    }

    sort(bars.begin(), bars.end());

    int median = bars[n / 2];

    int ld = bars[n - 1] - median;
    int rd = median - bars[0];
    if(ld > rd){
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