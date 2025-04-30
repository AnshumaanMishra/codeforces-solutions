#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, k;
    cin >> n >> k; 
    lli l[n];
    lli r[n];
    lli rem[n];
    lli sum = 0;
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    for(int i = 0; i < n; i++){
        cin >> r[i];
    }
    for(int i = 0; i < n; i++){
        if(l[i] > r[i]){
            sum += l[i];
            rem[i] = r[i];
        }
        else{
            sum += r[i];
            rem[i] = l[i];
        }
    }
    sort(rem, rem+n);

    for(int i = 0; i < k - 1; i++){
        sum += rem[n - i - 1];
    }
    cout << sum + 1 << endl;
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