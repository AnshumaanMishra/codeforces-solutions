#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<int> l;
    vector<int> r;
    int temp;
    int mod = 0;
    int prev = -1;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 0 and prev != 0){
            if(i != n - 1){
                l.push_back(i - mod);
                r.push_back(i + 1 - mod);
                mod++;
            }
            else{
                l.push_back(i - mod - 1);
                r.push_back(i - mod);
                mod++;
            }
        }
        if(temp == 0 and prev == 0){
            prev = -1;
        }
        else{
            prev = temp;
        }
    }
    l.push_back(0);
    r.push_back(n - mod - 1);
    cout << l.size() << endl;
    for(int i = 0; i < l.size(); i++){
        cout << l[i] + 1 << " " << r[i] + 1 << endl;
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