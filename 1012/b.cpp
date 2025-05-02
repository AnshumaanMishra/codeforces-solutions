#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

bool checkRow(int** grid, int row, int n, int m);
bool checkCol(int** grid, int col, int n, int m);

bool checkRow(int** grid, int row, int n, int m){
    for(int i = 1; i < m; i++){
        if(grid[row][i - 1] == 0 and grid[row][i] == 1){
            if(!checkCol(grid, i, n, m)){
                return false;
            }
        }
    }
    return true;
}

bool checkCol(int** grid, int col, int n, int m){
    for(int i = 1; i < n; i++){
        if(grid[i - 1][col] == 0 and grid[i][col] == 1){
            if(!checkRow(grid, i, n, m)){
                return false;
            }
        }
    }
    return true;
}

void solve(){
    int n, m;
    cin >> n >> m;
    char temp;
    int** grid = new int*[n * sizeof(int*)];
    for(int i = 0; i < n; i++){
        grid[i] = new int[m * sizeof(int)];
    }
    scanf("%c", &temp);
    for(int i = 0; i < n; i++){
        cout << i << endl;
        for(int j = 0; j < m; j++){
            scanf("%c", &temp);
            grid[i][j] = (temp == '1');
        }
        scanf("%c", &temp);
    }

    for(int i = 0; i < n; i++){
        cout << i << endl;
        if(!checkRow(grid, i, n, m)){
            cout << "NO" << endl;
            return;
        }
    }

    for(int i = 0; i < m; i++){
        cout << i << endl;
        if(!checkCol(grid, i, n, m)){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}