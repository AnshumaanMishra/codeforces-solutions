#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void printGrid(vector<vector<int>>& grid){
    for(auto x : grid){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
}

void fillGrid(vector<vector<int>>& grid, int n, int row, int col){
    // cout << n << " " << row << " " << col << endl;
    // printGrid(grid);
    // cout << endl;
    if(n == 1){
        grid[row][col] = 0;
        return;
    }
    int l = (n - 1) * (n - 1);
    int h = n * n - 1;
    if(n % 2 == 0){
        fillGrid(grid, n - 1, row, col);
        grid[row + n - 1][col + n - 1] = h;
        int p = l;
        for(int i = 0; i < n - 1; i++){
            grid[row + i][col + n - 1] = p;
            p++;
        }
        // printGrid(grid);
        // cout << endl;
        for(int i = 0; i < n - 1; i++){
            grid[row + n - 1][col + i] = p;
            p++;
        }
        // printGrid(grid);
        // cout << endl;

    }
    else{
        fillGrid(grid, n - 1, row + 1, col + 1);
        grid[row][col] = h;
        int p = l;
        for(int i = 1; i < n; i++){
            grid[row][col + i] = p;
            p++;
        }
        for(int i = 1; i < n; i++){
            grid[row + i][col] = p;
            p++;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> row(n, 0);
    vector<vector<int>> grid(n, row);
    fillGrid(grid, n, 0, 0);
    printGrid(grid);
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