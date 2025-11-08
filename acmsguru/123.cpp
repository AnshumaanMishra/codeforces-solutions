#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	if(n == 0){
		cout << 0 << endl;
		return 0;
	}
	int a = 0;
	int b = 1;
	int sum = a + b;
	for(int i = 1; i < n; i++){
		int temp = a + b;
		a = b;
		b = temp;
		sum += temp;
	}
	cout << sum << endl;

}

