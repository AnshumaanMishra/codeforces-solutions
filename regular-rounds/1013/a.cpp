#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
    int n;
    cin >> n;
    int found = 0;
    int zero = 0, one = 0, two = 0, three = 0, five = 0, temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 0){
            zero++;
        }
        else if(temp == 1){
            one++;
        }
        else if(temp == 2){
            two++;
        }
        else if(temp == 3){
            three++;
        }
        else if(temp == 5){
            five++;
        }
        if(zero >= 3 and one >= 1 and two >= 2 and three >= 1 and five >= 1 and found == 0){
            found = i + 1;
        }
    }
    cout << found << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}