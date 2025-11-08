#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl


int main(){
    cin.tie(0)->sync_with_stdio(0);
    lli n, m, a, b, p, q;
    cin >> n >> m;
    vector<tuple<lli, lli, lli, lli>> data(n);
    for(int i = 0; i < n; i++){
        cin >> a >> b >> p >> q;
        data[i] = tuple<lli, lli, lli, lli>({a, b, p, q});
    }

    

    return 0;
}