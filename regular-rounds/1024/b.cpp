#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<lli> nums;
    lli temp, num0;
    int gt = 0;
    int lt = 0;
    int eq = 0;
    cin >> num0;
    num0 = abs(num0);
    for(int i = 1; i < n; i++){
        cin >> temp;
        if(abs(temp) > num0){
            gt++;
        }
        else if(abs(temp) < num0){
            lt++;
        }
        else{
            eq++;
        }
    }
    if(n == 1){
        cout << "YES" << endl;
        return;
    }
    int medpos = n / 2;
    if(lt <= n / 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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