#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long
#define MOD int(7+1e9)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

vector<int> toposort(int n, vector<int>& in_degree, vector<vector<int>>& out_degree) {
    vector<int> toposorted;
    queue<int> zeros;

    for(int i = 1; i <= n; i++) {
        if(in_degree[i] == 0) {
            zeros.push(i);
        }
    }

    while (!zeros.empty()) {
        int current = zeros.front();
        toposorted.push_back(current);
        for(auto x : out_degree[current]) {
            in_degree[x]--;
            if(in_degree[x] == 0) {
                zeros.push(x);
            }
        }
        zeros.pop();
    }
    return toposorted;
}

void solve(){
	int n, u, v, x, y;
	cin >> n;
	vector<int> in_degree(n + 1, 0);
	vector<vector<int>> out_degree(n + 1, vector<int>());
	for(int i = 0; i < n - 1; i++){
	    cin >> u >> v >> x >> y;
		if(x > y) {
		    in_degree[u]++ ;
		    out_degree[v].push_back(u);
		} else {
            in_degree[v]++;
            out_degree[u].push_back(v);
		}
	}

	vector<int> toposorted = toposort(n, in_degree, out_degree);
	int count = 1;
	vector<int> answer(n + 1, 0);
	for(int i = 0 ; i < n; i++){
	    answer[toposorted[i]] = count;
		count++;
    }
	for(int i = 1; i <= n; i++){
		 cout << answer[i] << " ";
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
