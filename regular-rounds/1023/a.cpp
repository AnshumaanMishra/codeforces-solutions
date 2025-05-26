#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

int GCD(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    int shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);

    while (b != 0) {
        b >>= __builtin_ctz(b);
        if (a > b) std::swap(a, b);
        b = b - a;
    }

    return a << shift;
}

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    int maxI = 0;
    bool alleq;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(i == 0){
            alleq = true;
        }
        else{
            if(alleq == true and (nums[i] != nums[i - 1])){
                alleq = false;
            }
        }
        if(nums[i] > nums[maxI]){
            maxI = i;
        }
    }
    if(alleq){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
        for(int i = 0; i < n; i++){
            if(i == maxI){
                cout << 2 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
        cout << endl;
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