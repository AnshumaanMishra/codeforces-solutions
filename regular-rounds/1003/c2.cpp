#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

int binSearch(int current, int prev, int next, int b[], int l, int h){
    int m = (l + h) / 2;
    // left end
    if(m == 0 or l == h){
        if(b[m] - current > prev and b[m] - current < next){
            return m;
        }
        else{
            return -1;
        }
    }
    else{
        if(b[m] - current > prev and b[m] - current < next){
            if(b[m - 1] > prev){
                return binSearch(current, prev, next, b, l, m + 1);
            }
            else{
                return m;
            }
        }
        else{
            if(b[m] - current > prev and b[m] - current > next){
                return binSearch(current, prev, next, b, m, h);
            }
            else{
                return binSearch(current, prev, next, b, l, m + 1);
            }
        }
    }
    
}

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    if(n == 1){
        cout << "YES" << endl;
    }
    sort(b, b + m);

    for(int i = 0; i < n - 1; i++){
        if(i == 0){
            if(binSearch(a[i], 0, a[i + 1], b, 0, n - 1) == -1){
                cout << "NO" << endl;
            }
        }
        if(binSearch(a[i], a[i - 1], a[i + 1], b, 0, n - 1) == -1){
            cout << "NO" << endl;
        }
    }
    cout << "YES" << endl;

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