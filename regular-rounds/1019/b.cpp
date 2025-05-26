#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    int n;
    cin >> n;
    string bin;
    cin >> bin;
    int switches = 0;
    int current = '0';
    for(int i = 0; i < bin.length(); i++){
        switches += current != bin[i];
        current = (current != bin[i]) ? bin[i] : current;
    }
    if(switches <= 1){
        cout << n + switches << endl;
    }
    else if(switches == 2){
        cout << n + switches - 1 << endl;
    }
    else{
        cout << n + switches - 2 << endl;
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