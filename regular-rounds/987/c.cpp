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
  if(n == 1 or n == 3) {
    cout << -1 << endl;
    return;
  }
  if(n % 2 == 0) {
    for(int i = 1; i <= n / 2; i++) {
      cout << i << " " << i << " ";
    }
  } else {
    if(n < 26) {
      cout << -1 << endl;
      return;
    }
    int c = 3;
    int c2 = 0;
    for(int i = 1; i <= n; i++) {
      // cout << i << endl;
      if(i == 1) {
        cout << 1 << " ";
      } else if(i == 10) {
        cout << 1 << " " << 2 << " ";
        i++;
      } else if(i == 26) {
        cout << 1 << " " << 2 << " ";
        i++;
      } else {
        cout << c << " ";
        c2++;
        if(c2 == 2) {
          c2 = 0;
          c++;
        }
      }
    }
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
