#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

int leastfactor(int n) {
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      return i;
    }
  }
  return -1;
}

void solve(){
	int n, m;
	cin >> n >> m;
	if(n == 1) {
	  YES;
		return;
	}
	if(n <= m) {
	  NO;
		return;
	}
	int ans = leastfactor(n);
	if(ans == -1) {
	  YES;
	} else if(ans <= m) {
	  NO;
	} else {
	  YES;
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
