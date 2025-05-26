#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, k;
    cin >> n >> k;
    lli plates = n / (k + 1);
    vector<lli> d;
    lli temp;
    for(int i = 0; i < n - k; i++){
        cin >> temp;
        d.push_back(temp);
    }
    for(int i = 0; i < k; i++){
        cin >> temp;
    }
    sort(d.begin(), d.end(), std::greater<int>());
    lli sum = 0;
    for(int i = 0; i < plates; i++){
        sum += d[i];
    }
    cout << "Ans = " << sum << endl;
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