#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<int> d(n, -1);
    vector<int> l(n, -1);
    vector<int> r(n, -1);
    int ones = 0, zeros = 0, blanks = 0;
    for(int i = 0; i < n; i++){
        cin >> d[i];
        if(d[i] == 1){
            ones++;
        }
        else if(d[i] == 0){
            zeros++;
        }
        else{
            blanks++;
        }
    }
    int h = 0;
    int flag = false;
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        if(l[i] > i + 1){
            flag = true;
        }
        if(i == 0){
            if(d[0] == 0 and l[0] != 0){
                flag = true;
            }
        }
        else if(i > 0){
            if(l[i] < l[i - 1]){
                l[i] = l[i - 1];
            }
        }
        if(l[i] > r[i]){
            flag = true;
        }
    }
    if(flag){
        // cout << "a";
        cout << -1 << endl;
        return;
    }

    for(int i = n - 2; i >= 0; i--){
        if(r[i] > r[i + 1]){
            r[i] = r[i + 1];
        }
        if(l[i] > r[i]){
            // cout << "b";
            cout << -1 << endl;
            return;
        }
    }
    if(ones + blanks < l[n - 1]){
        // cout << "c";
        cout << -1 << endl;
        return;
    }

    h = 0;
    for(int i = 0; i < n; i++){
        if(d[i] != -1){
            h += d[i];
        }
        else{
            if(h + 1 <= r[i] and h + 1 >= l[i]){
                h++;
                d[i] = 1;
            }
            else{
                d[i] = 0;
            }
        }
        if(!(h >= l[i] and h <= r[i])){
            // cout << "d";
            cout << -1 << endl;
            return;
        }
    }

    for(auto x : d){
        cout << x << " ";
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