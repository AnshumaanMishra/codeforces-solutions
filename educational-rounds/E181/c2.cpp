#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli count_div(lli l, lli r, lli d) {
    return r / d - (l - 1) / d;
}

void solve() {
    lli l, r;
    cin >> l >> r;
    lli x = r - l + 1;

    x -= count_div(l, r, 2);
    x -= count_div(l, r, 3);
    x -= count_div(l, r, 5);
    x -= count_div(l, r, 7);

    x += count_div(l, r, 6);   
    x += count_div(l, r, 10);  
    x += count_div(l, r, 14);  
    x += count_div(l, r, 15);  
    x += count_div(l, r, 21);  
    x += count_div(l, r, 35);  

    x -= count_div(l, r, 30);  
    x -= count_div(l, r, 42);  // 2*3*7
    x -= count_div(l, r, 70);  // 2*5*7
    x -= count_div(l, r, 105); // 3*5*7

    // Add numbers divisible by LCM of all 4 bad primes
    x += count_div(l, r, 210); // 2*3*5*7

    cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
