#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

int GCD(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    int shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);

    while (b != 0) {
        b >>= __builtin_ctz(b);
        if (a > b) std::swap(a, b);
        b = b - a;
    }

    return a << shift;
}

void solve(){
    lli a, b, k;
    cin >> a >> b >> k;
    lli x = gcd(a, b);
    // bool y = (a / x > k) or (b / x > k);
    lli x1 = a / x;
    lli x2 = b / x;
    lli max = (x1 > x2) ? x1 : x2;
    if(k >= max){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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