#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, q;
    cin >> n >> q;
    long long int piles[n];
    for(long long int i = 0; i < n; i++){
        cin >> piles[i];
    }
    while (q--){
        long long int l, r;
        cin >> l >> r;
        long long int zeros = 0;
        long long int ones = 0;
        long long int twos = 0;
        for(int i = l - 1; i < r; i++){
            if(piles[i] == 0){
                zeros++;
            }
            else if(piles[i] == 1){
                ones++;
            }
            else if(piles[i] == 2){
                twos++;
            }
        }
        if(zeros == 0 && ones <= 1){
            cout << -1 << endl;
        }
        else{
            if(zeros == 0){
                long long int x = r - l - 1;
                cout << x << " ";
                long long int fact = 1;
                // cout << "Fact " << fact << endl;
                if(ones > 2){
                    long long int num = ones * (ones - 1) / 2;
                    fact = (fact * num) % 998244353;
                }
                cout << fact << endl;
            }
            else{
                long long int x = r - l;
                cout << x << " ";
                long long int fact = 1;
                fact = (fact * zeros) % 998244353;
                cout << fact << endl;
            }
        }
    }
    return 0;
}