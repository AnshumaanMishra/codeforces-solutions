#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, x;
    cin >> n >> x;
    if(n == 1 and x == 0){
        // cout << "Case 1" << endl;
        cout << -1 << endl;
        return;
    }
    if(x == 0 and n % 2 == 0){
        // cout << "Case 2" << endl;
        cout << n << endl;
        return;
    }
    if(x == 0 and n % 2 != 0){
        // cout << "Case 3" << endl;
        cout << 6 + n - 3 << endl;
        return;
    }
    if(x == 1){
        if(n % 2 == 1){
            cout << n << endl;
            return;
        }
        else{
            cout << n - 2 + 5 << endl;
            return;
        }
    }
    lli x2 = x;
    lli bits = 1;
    lli ones = 0;
    ones += x2 & 1;
    while(x2 >>= 1){
        bits++;
        ones += x2 & 1;
    }
    lli sum = 0;
    if(n <= ones){
        cout << x << endl;
        return;
    }
    if(n <= bits){
        sum += x;
        n -= ones;
        bits -= ones;
        if(n % 2 == 0){
            // cout << "Case 4" << endl;
            sum += n;
        }
        else{
            // cout << "Case 5" << endl;
            sum += 2 + n - 1;
        }
    }
    else{
        sum += x;
        n -= ones;
        if(n % 2 == 0){
            // cout << "Case 6" << endl;
            sum += n;
        }
        else{
            // cout << "Case 7" << endl;
            sum += 2 + n - 1;
        }
    }
    cout << sum << endl;
    
    
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