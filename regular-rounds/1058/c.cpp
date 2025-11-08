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
	if(n == 0) {
	    YES;
		return;
	}
	if(n == 1){
	    NO;
		return;
	}
	vector<int> binary;
	while((n & 1) == 0) {
	    n >>= 1;
	}
	while (n > 0) {
	    binary.push_back(n & 1);
		n >>= 1;
	}
	int k = binary.size();
	// int i = 0;
	// while (binary[i] != 1) {
	//     binary.erase(binary.begin());
	// 	i++;
	// }
	if(k % 2 == 1) {
	    if(binary[k / 2] == 1) {
			NO;
			return;
		}
	}

	for(int i = 0; i < k; i++){
	    if(binary[i] != binary[k - i - 1]) {
			NO;
			return;
		}
	}
	YES;
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
