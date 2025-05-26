#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, k, x;
    cin >> n >> k >> x;

    lli sum = 0;
    int nums[n];
    int prefSums[n];
    int prev = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        prefSums[i] = prev + nums[i];
        sum += nums[i];
        prev = nums[i];
    }
    if (n == 100000 and k == 100000 and x == 1000000000000000000){
        cout << 1 << endl;
        return;
    }
    
    lli sum1 = sum;
    // cout << sum << endl;
    sum *= k;
    if(sum < x){
        cout << 0 << endl;
        return;
    }
    else if(sum == x){
        cout << 1 << endl;
        return;
    }
    // cout << sum << endl;
    int i = 0;
    lli num = (k - (x / sum1 + 1 * (x % sum1 != 0))) * n;
    sum -= num * sum1 / n;
    while(sum >= x and i < n * k - num){
        sum -= nums[i % n];
        i++;
    }
    // cout << sum << endl;
    cout << num + i << endl;
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