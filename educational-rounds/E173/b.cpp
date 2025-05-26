#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, d;
        cin >> n >> d;
        cout << "1 ";
        if((d == 0 || d == 3 || d == 6 || d == 9) || (n >= 3)){
            cout << "3 ";
        }
        if(d == 0 || d == 5){
            cout << "5 ";
        }
        if(d == 7 || n >= 3){
            cout << "7 ";
        }
        if(d == 0 || d == 9 || n >= 6 || ((d == 3 || d == 6) && n >= 3)){
            cout << "9";
        }
        cout << endl;
    }
    return 0;
}