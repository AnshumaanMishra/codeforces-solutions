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
    lli nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums, nums + n);
    lli smol = nums[0];
    lli g = 0;
    for(int i = 1; i < n; i++){
        if(nums[i] % smol != 0){
            continue;
        }
        g = gcd(g, nums[i]);
    }
    if(g != smol){
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