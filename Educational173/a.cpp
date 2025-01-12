#include <bits/stdc++.h>
using namespace std;

int mincoins(long long int n){
    if(n <= 3){
        return 1;
    }
    else{
        return 2 * mincoins(n / 4);
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n;
        cin >> n;
        cout << mincoins(n) << endl;
    }   
    return 0;
}