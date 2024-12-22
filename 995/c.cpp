#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);
        return binarySearch(arr, mid + 1, high, x);
    }
  return -1;
}


int main(){
    // int array[] = {1, 2};
    // cout << binarySearch(array, 0, 2, 1) << endl;
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int quesArr[m];
        int knowsArr[k];
        for(int i = 0; i < m; i++){
            cin >> quesArr[i];
        }

        for(int i = 0; i < k; i++){
            cin >> knowsArr[i];
        }

        if(k < (n - 1)){
            for(int i = 0; i < m; i++){
                cout << 0;   
            }
            cout << endl;
        }
        else if(k == n){
            for(int i = 0; i < m; i++){
                cout << 1;
            }
            cout << endl;
        }
        else{
            // cout << "Entered This" << endl;
            for(int i = 0; i < m; i++){
                int result = binarySearch(knowsArr, 0, n - 1, quesArr[i]);
                if (result == -1) cout << 1;
                else cout << 0;
            }
            cout << endl;
        }
    }
    return 0;
}