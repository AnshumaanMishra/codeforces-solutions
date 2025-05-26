#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, k, temp;
    cin >> n >> k;
    lli max = 0, min = INT_MAX;
    lli sum = 0;
    int maxd = 1;
    int mind = 1;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == max){
            maxd += 1;
        }
        if(temp > max){
            max = temp;
            maxd = 1;
        }
        if(min > temp){
            min = temp;
        }
        sum += temp;
    }
    if((k < max - min - 1) or (k < max - min and maxd > 1)){
        cout << "Jerry" << endl;
        return;
    }
    if(sum % 2 == 1){
        cout << "Tom" << endl;
    }
    else{
        cout << "Jerry" << endl;
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