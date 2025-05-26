#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, q;
    cin >> n >> q;
    lli k1 = pow(2, n);
    lli z1 = pow(2, 2 * n - 2);
    string c;
    while(q--){
        cin >> c;
        lli x = 0, y = 0, r = 0;
        lli k = k1;
        lli z = z1;
        if(c == "->"){
            cin >> y >> x;
            lli r = 1;
            x -= 1;
            y -= 1;
            k /= 2;
            while(k > 0){
                lli a = x / k;
                lli b = y / k;
                if(a == 1 and b == 1){
                    r += z;
                }
                else if(a == 0 and b == 1){
                    r += 2 * z;
                }
                else if(a == 1 and b == 0){
                    r += 3 * z;
                }
                x %= k;
                y %= k;
                k /= 2;
                z /= 4;
            }
            cout << r << endl;
        }
        else{
            lli x = 0, y = 0, r = 0;
            cin >> r;
            r -= 1;
            while(k > 1){
                lli m = (r) / z;
                if(m == 1 or m == 3){
                    x += k / 2;
                }
                if(m == 1 or m == 2){
                    y += k / 2;
                }
                k /= 2;
                r = (r) % z;
                z /= 4;
            }
            cout << y + 1 << " " << x + 1 << endl;
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