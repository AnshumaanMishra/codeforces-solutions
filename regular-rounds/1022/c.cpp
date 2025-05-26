#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n;
    cin >> n;
    lli count = 0;
    lli last = 0;
    lli seclast = 0;
    lli curr;
    while(n--){
        cin >> curr;
        if(last == curr){
            continue;
        }
        if(seclast > last and last < curr){
            count++;
        }
        seclast = last;
        last = curr;
    }
    cout << count + 1 << endl;
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