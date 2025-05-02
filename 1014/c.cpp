#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
    int n;
    cin >> n;
    // vector<int> even;
    // vector<int> odd;
    int even = 0, odd = 0;
    lli evenSum = 0, oddSum = 0;
    int temp;
    int max = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp % 2 == 0){
            even++;
            evenSum += temp;
        }
        else{
            odd++;
            oddSum += temp;
        }
        if(temp > max){
            max = temp;
        }
    }

    // cout << max << " " << even << " " << odd << endl;

    if(odd * even != 0){
        cout << oddSum + evenSum - odd + 1 << endl;
    }
    else{
        cout << max << endl;
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