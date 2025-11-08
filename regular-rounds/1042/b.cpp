#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n;
    cin >> n;
    if(n == 2){
        cout << "-1 2" << endl;
        return;
    }
    for(int i = 0; i < n - 1; i++){
        if(i % 2){
            cout << 3 << " ";
        }
        else{
            cout << -1 << " ";
        }
    }
    if((n - 1) % 2){
        cout << 2 << endl;
    }
    else{
        cout << -1 <<  endl;
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