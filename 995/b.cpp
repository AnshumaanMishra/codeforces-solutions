#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c;
        int days = 0;
        cin >> n >> a >> b >> c;        
        int initial = n / (a + b + c);
        n = n % (a+b+c);
        days += 3 * initial;
        if(n > 0){
            n -= a;
            days++;
        }
        if(n > 0){
            n -= b;
            days++;
        }
        if(n > 0){
            n -= c;
            days++;
        }
        cout << days << endl;
    }
    return 0;
}