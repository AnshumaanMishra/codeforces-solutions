#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void solve(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> out_degree(n + 1, vector<int>());
	int s, e;
	for(int i = 0; i < m; i++) {
	    cin >> s >> e;
		out_degree[s].push_back(e);
		out_degree[e].push_back(s);
	}

	int x, y;
	for(int i = 1; i <= n; i++){
		if(out_degree[i].size() == 1) {
		    y = out_degree[out_degree[i][0]].size() - 1;
		}
	}

	x = m / (1 + y);
	cout << x << " " << y << endl;
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
