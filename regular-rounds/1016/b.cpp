#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
    string n;
    cin >> n;
    
    int zeros = 0;
    bool flag = n[n.length() - 1] == '0';
    int trailz = 0;
    for(int i = n.length() - 1; i >= 0; i--){
        if(n[i] == '0'){
            zeros ++;
            if(flag){
                trailz++;
            }
        }
        else{
            flag = false;
        }
    }
    
    

    cout << (n.length() - 1) - (zeros - trailz) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}