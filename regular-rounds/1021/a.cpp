#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n;
    cin >> n;
    vector<int> map(10, 0);
    lli n2 = n;
    while(n2 > 0){
        map[n2 % 10] += 1;
        n2 /= 10;
    }

    lli num = 0, t = 0;
    for(int i = 1; i < 11; i++){
        t = 10 - i;
        for(int i = t; i < 10; i++){
            if(map[i] > 0){
                num = num * 10 + i;
                map[i]--;
                break;
            }
        }
    }
    cout << num << endl;
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