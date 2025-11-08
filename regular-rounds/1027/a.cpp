#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    string s;
    cin >> s;
    int n = stoi(s);
    int x = sqrt(n);
    if(x*x == n){
        cout << x - 1 << " " << 1 << endl; 
    }
    else{
        cout << -1 << endl;
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