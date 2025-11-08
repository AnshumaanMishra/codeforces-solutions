#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
        S[i] = min(S[i] % k, k - S[i] % k);
    }
    vector<int> T(n);
    for (int i = 0; i < n; i++) {
        cin >> T[i];
        T[i] = min(T[i] % k, k - T[i] % k);
    }
    sort(S.begin(), S.end());    
    sort(T.begin(), T.end());   
    if(S == T){
        cout << "YES" << endl;
    } 
    else{
        cout << "NO" << endl;
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