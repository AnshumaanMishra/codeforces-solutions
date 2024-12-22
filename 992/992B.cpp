#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        int a = 1;
        int r = 0;
        while(3 * 2 * a - 1 <= n){
            // cout << a << " " << n << endl;
            a *= 2;
            r++;
        }
        cout << r + 2 << endl;
    }
    return 0;
}