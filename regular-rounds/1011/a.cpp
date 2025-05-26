#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

bool revComp(string s, int n, int k){
    for(int i = 0; i < n / 2; i++){
        if(s[i] < s[n - i - 1]){
            return true;
        }
        else if(s[i] > s[n - i - 1]){
            if(k > 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            for(int j = i; j < n - i - 1; j++){
                if((s[j] < s[i] or s[j] > s[n - i - 1]) and k > 0){
                    return true;
                }
            }
        }
    }
    return false;
}

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n == 1){
        cout << "NO" << endl;
    }
    else if(revComp(s, n, k)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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