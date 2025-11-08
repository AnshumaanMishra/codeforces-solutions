#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    lli l, r;
    cin >> l >> r;
    lli x = r - l + 1;
    x -= (r / 2) - ((l - 1) / 2);
    x -= (r / 3) - ((l - 1) / 3);
    x -= (r / 5) - ((l - 1) / 5);
    x -= (r / 7) - ((l - 1) / 7);
    x += (r / 6) - ((l - 1) / 6);
    x += (r / 10) - ((l - 1) / 10);
    x += (r / 14) - ((l - 1) / 14);
    x += (r / 15) - ((l - 1) / 15);
    x += (r / 21) - ((l - 1) / 21);
    x += (r / 35) - ((l - 1) / 35);
    x -= (r / 30) - ((l - 1) / 30);
    x -= (r / 42) - ((l - 1) / 42);
    x -= (r / 70) - ((l - 1) / 70);
    x -= (r / 105) - ((l - 1) / 105);
    x += (r / 210) - ((l - 1) / 210);
    cout << x << endl;
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