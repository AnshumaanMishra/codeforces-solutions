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
	string s;
	cin >> s;
	// cout << s << endl;

	vector<int> zeroClusters;
	int count = 0;
	for(int i = 0; i < n; i++) {
	    if(s[i] == '0') {
			count++;
		} else {
		    // cout << count << endl;
		    if(count > 0) {
				if(count == 1) {
				    NO;
					return;
				}
				zeroClusters.push_back(count);
				count = 0;
			}
		}
	}
	if(count > 0) {
        if(count == 1) {
            NO;
            return;
        }
        zeroClusters.push_back(count);
        count = 1;
    }

	// for(auto x : zeroClusters){
		 // cout << x << " ";
    // }
    // cout << endl;

	bool current = s[0] == '1';
	int zeropointer = 0;
	for(int i = 0; i < n; i++) {
	    if(s[i] == '0') {
			current = false;
		} else {
		    current = true;
		}
	    if(current) {
			cout << (i + 1) << " ";
		} else {
		    int upper = i + zeroClusters[zeropointer];
		    for(int j = 1; j <= zeroClusters[zeropointer]; j++) {
				if(i + j + 1 > upper) {
				    cout << i + j + 1 - zeroClusters[zeropointer] << " ";
				} else {
				    cout << i + j + 1 << " ";
				}
			}
			zeropointer++;
			i = upper - 1;
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
