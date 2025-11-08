#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int pos = 0;
    int neg = 0;

    lli n;
    cin >> n;
    while(n--){
        lli a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (c - a) << " " << d - b << endl;
        if(c - a > 0){
            pos++;
        }
        else if(c - a < 0){
            neg++;
        }
        if(d - b > 0){
            pos++;
        }
        else if(d - b > 0){
            neg++;
        }
        cout << pos << " " << neg << endl;
    }
    cout << ((pos > neg) ? pos : neg) << endl;
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