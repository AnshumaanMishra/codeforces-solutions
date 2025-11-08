#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<int> d(n);
    for (auto &x : d) {
        cin >> x;
    }
    vector<lli> l(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> l[n] >> r[n];
        if(i > 0){
            if(l[i] < l[i - 1]){
                l[i] = l[i - 1];
            }
        }
    }

    for(int i = n - 2; i >= 0; i--){
        if(r[i] > r[i + 1]){
            r[i] = r[i + 1];
        }
    }

    lli L = 0, R = 0;
    // lli h = 0;
    for(int i = 0; i < n; i++){
        if(d[i] != -1){
            R += d[i];
            L += d[i];
        }
        else{
            if(l[i] == L + 1)            
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