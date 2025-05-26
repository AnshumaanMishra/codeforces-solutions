#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    lli n, k;
    cin >> n >> k;
    vector<lli> a;
    int temp;
    lli min = INT_MAX;
    lli max = -1;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(min > temp){
            min = temp;
        }
        if(max < temp){
            max = temp;
        }
        a.push_back(temp);
    }
    lli sum = -1;
    int flag = false;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp != -1){
            if(sum == -1){
                sum = a[i] + temp;
            }
            else{
                if(sum != a[i] + temp){
                    cout << 0 << endl;
                    flag = true;
                }
                
            }
        }
    }
    // cout << "Sum = " << sum << " max = " << max << " min = " << min << endl;
    if(flag){
        return;
     }
    if(sum == -1){
        cout << (min + k) - max + 1 << endl;
        return;
    }
    if((sum - max < 0) or (sum - min > k)){
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    return;
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