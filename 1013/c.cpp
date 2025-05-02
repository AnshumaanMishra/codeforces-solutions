#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

int isPrime(int x){
    if(x == 1) return 0;
    for(int i = 2; i <= sqrt(x); ++i){
        if(x % i == 0) return 0;
    }
    return 1;
}


vector<int> computePrimeCounts(int n) {
    vector<bool> is_prime(n + 1, true);
    vector<int> prime_count(n + 1, 0);
    
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        prime_count[i] = prime_count[i - 1] + (is_prime[i] ? 1 : 0);
    }
    
    return prime_count;
}

void solve(){
    int n; cin >> n;
 
    if(n == 2) {
        cout << 1 << '\n';
        return;
    }
    
    int ans = 0;
    vector<int> prime_count = computePrimeCounts(n);
    
    for(int i = 1; i < n + 1; ++i){
        int k = n / i;
        ans += prime_count[k];
    }
    
    cout << ans << '\n';
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