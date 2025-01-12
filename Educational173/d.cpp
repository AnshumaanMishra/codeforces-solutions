#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int l, r, G;
        cin >> l >> r >> G;
        long long int low = (l % G != 0) ? l + (G - l % G) : l;
        long long int high = r - (r % G);
        while(__gcd(low, high) != G && low <= high){
            high -= G;
        }
        if(low > high){
            low = -1;
            high = -1;
        }
        cout << low << " " << high << endl;
    }
    return 0;
}