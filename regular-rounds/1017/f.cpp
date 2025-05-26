#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7 + 1e9)

void solve()
{
    int n, m, k;
    int a = 0;
    cin >> n >> m >> k;
    if(m % k == 0){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << a % k + 1 << " ";
                a++;
            }
            a += 1;
            cout << endl;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << a % k + 1 << " ";
                a++;
            }
            cout << endl;
        }
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}