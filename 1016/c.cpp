#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long int lli;

bool checkPrime(int n){
    int a = floor(sqrt(n));
    for(int i = 2; i <= a; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n, k;
    cin >> n >> k;
    if(n==1 & k != 2){
        cout << "NO" << endl;
        return;
    }
    if(n==1 & k == 2){
        cout << "YES" << endl;
        return;
    }

    if(k != 1){
        cout << "NO" << endl;
        return;
    }
    if(checkPrime(n)){
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