#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n, num, prev;
    cin >> n;
    int n2 = n;
    cin >> prev;
    cin >> num;
    n -= 2;
    int sum = num + prev;
    if(n == 0){
        if(num == prev){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        return;
    }
    bool flag = false;
    if(num == prev and num == 0){
        cout << "YES" << endl;
        flag = true;
    }
    while(n--){
        prev = num;
        cin >> num;
        if(num == prev and num == 0 and !flag){
            cout << "YES" << endl;
            flag = true;
        }
        sum += num;
    }
    if(sum == n2){
        cout << "YES" << endl;
    }
    else if(!flag){
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