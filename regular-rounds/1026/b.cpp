#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

bool checkBalanced(string s){
    stack<char> bs;
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] == '('){
            bs.push('(');
        }
        else{
            if(bs.empty()){
                return false;
            }
            else{
                bs.pop();
            }
        }
    }
    return true;
}

void solve(){
    string s;
    cin >> s;
    if(checkBalanced(s)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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