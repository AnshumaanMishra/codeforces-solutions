#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    vector<lli> left;
    vector<lli> right;
    lli temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(i % 2 == 0){
            left.push_back(temp);
        }
        else{
            right.push_back(temp);
        }
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << left[i / 2] << " ";
        }
        else{
            cout << right[i / 2] << " ";
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