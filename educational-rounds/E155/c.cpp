#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(998244353)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

int factorial(int n) {
  if(n <= 1) {
    return 1;
  }
  return (n * factorial(n - 1)) % 998244353;
}

void solve(){
	string s;
	cin >> s;
	int ops = 0;
	int total = 1;
	int current = 0;
	bool currentD = s[0] == '1';
	// int count = 0;

	for(int i = 0; i < s.length(); i++) {
	  if(currentD and s[i] == '1'){
			current++;
		} else if (!currentD and s[i] == '0') {
      current++;
		} else {
		  // cout << current << endl;
		  ops += current - 1;
			if(current > 1) {
			  // count++;
			  total *= current;
				total %= 998244353;
			}
			currentD = !currentD;
			current = 1;
		}
	}

	ops += current - 1;
	if(current > 1) {
	  // count++;
	  total *= current;
		total %= 998244353;
	}
	currentD = !currentD;
	current = 1;
	total = (total * (factorial(ops) % 998244353)) % 998244353;
	total += (total == 0);
	cout << ops << " " << total << endl;
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
