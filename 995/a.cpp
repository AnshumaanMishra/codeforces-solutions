#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arrA[n], arrB[n];
        for(int i = 0; i < n; i++){
            cin >> arrA[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arrB[i];
        }
        int diff[n];
        int sum = 0;
        for(int i = 0; i < n - 1; i++){
            if(arrA[i] - arrB[i + 1] >= 0)
            sum += arrA[i] - arrB[i + 1];
        }
        sum += arrA[n - 1];
        cout << sum << endl;

    }
    return 0;
}