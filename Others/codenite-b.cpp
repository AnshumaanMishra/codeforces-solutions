#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

bool checkPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 or n == 3) return true;
    if (n % 2 == 0 or n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve(){
	int n, k;
	cin >> n >> k;

	if(k <= n) {
	    YES;
	    for(int i = 1; i <= n; i++){
			cout << i << " ";
		}
		cout << endl;
		return;
	}
	if(checkPrime(k)) {
	    NO;
		return;
	}
	vector<int> answers;
	vector<int> others;
	for(int i = n; i >= 1; i--){
	    if(k % i == 0) {
			answers.push_back(i);
			k /= i;
		} else {
		    others.push_back(i);
		}
	}
	if(k != 1) {
	    NO;
		return;
	}
	else{
	    YES;
		for(auto x : answers) {
		    cout << x << " ";
		}
		for(auto x : others) {
		    cout << x << " ";
		}
		cout << endl;
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
