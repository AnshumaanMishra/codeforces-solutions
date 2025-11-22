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
	string input;
	cin >> input;
	int s = 0, p = 0;
	for(int i = 0; i < n; i++) {
	  s += input[i] == 's';
	  p += input[i] == 'p';
	}

	if(s == 1 and input[0] == 's') {
	  YES;
	} else if(p == 1 and input[n - 1] == 'p') {
	  YES;
	} else if(s == 0 or p == 0) {
	  YES;
	} else {
	  NO;
	}
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
