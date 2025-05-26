#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
    int n;
    cin >> n;
    char a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int n1 = 0, n2 = 0;
    for(int i = 0; i < n; i++){
        n1 += (i % 2 == 0) * (a[i] == '0') + (i % 2 != 0) * (b[i] == '0');
        n2 += (i % 2 != 0) * (a[i] == '0') + (i % 2 == 0) * (b[i] == '0');
    }
    bool decision = n1 >= ceil((float)n / 2) && n2 >= n / 2;
    // cout << n1 << " " << n2 << endl;
    if(decision){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}