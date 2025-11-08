#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
   int a, b, c;
   cin >> a >> b >> c;
   if(a == 1 or b == 1 or c == 1){
       cout << 1 << endl;
       return;
   }
   cout << a * b * c - 1 << endl;

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
