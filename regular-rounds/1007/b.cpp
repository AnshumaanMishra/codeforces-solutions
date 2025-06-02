#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    lli n;
    cin >> n;
    lli sum = n * (n + 1) / 2;
    double sq = sqrt(sum);
    if(floor(sq) == ceil(sq)){
        cout << -1 << endl;
        return;
    }
    else{
        for(int i = 1; i <= n; i++){
            lli sum = i * (i + 1) / 2;
            double sq = sqrt(sum);
            if(i == 1 or i == 8 or i == 49 or i == 288 or i == 1681 or i == 9800 or i == 57121 or i == 332928 or i == 1940449){
                cout << i + 1 << " " << i << " ";
                i++;
            }
            else{
                cout << i << " ";
            }
        }
    }
    cout << endl;
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