#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
    int n;
    cin >> n;
    int max = 0;
    int min = INT_MAX;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp > max){
            max = temp;
        }
        if(temp < min){
            min = temp;
        }
    }
    cout << max - min << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}