#include <bits/stdc++.h>
using namespace std;

int find(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return (i + 1);
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int nums[n];
        // vector<int> map(k, 0);
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            nums[i] = temp;
            // map[temp % k]++;
        }
        
        if(n == 1){
            cout << "YES" << endl;
            cout << 1 << endl;
            continue;
        }
        // for(int i = 0; i < n; i++){
        //     cout << nums[i] << ", ";
        // }
        // cout << endl;
        int ans = -1;
        // for(int i = 0; i < map.size(); i++){
        //     cout << i << " " << map[i] << endl;
        // }
        int i, j;
        bool found = false;
        for(i = 0; i < n; i++){
            found = false;
            for(j = 0; j < n; j++){
                if(i != j && (nums[i] - nums[j]) % k == 0){
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "YES" << endl;
                cout << i + 1 << endl;
                break;
            }
        }
        if(found){
            cout << "NO" << endl;
        }
    }
    return 0;
}