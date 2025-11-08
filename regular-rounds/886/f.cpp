#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
    int n;
    cin >> n;
    int temp;
    vector<int> map(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if(temp <= n) {
            map[temp] += 1;
        }
    }
    vector<int> cnt(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i) {
            cnt[j] += map[i];
        }
    }
    int max = 0;
    for(int i = 1; i <= n; i++) {
        if(cnt[i] > max){
            max = cnt[i];
        }
    }

    cout << max << endl;

}

int32_t main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
