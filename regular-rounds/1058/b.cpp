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
    vector<int> sums(n);
    for (int i = 0; i < n; i++) {
        cin >> sums[i];
    }
    int last = 1;
    vector<int> answer;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            answer.push_back(1);
            cout << 1 << " ";
            continue;
        }
        int l = sums[i] - sums[i - 1];
        cout << l << " " << i << " " << i - l << endl;
        if(l > i) {
            last++;
            answer.push_back(last);
            cout << last << " ";
        } else {
            answer.push_back(sums[i - l]);
            cout << sums[i - l] << " ";
        }
    }
    cout << endl;
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
