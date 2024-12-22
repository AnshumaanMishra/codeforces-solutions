#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int low, int x, int sum){
    int high = arr.size() - 1;
    int mid = (low + high) / 2;
    while(high > low){
        // cout << low << " " << mid << " " << high << endl;
        if(sum - arr[mid] == x){
            // cout << "1" << endl;
            if(low <= high - 2){            
            // cout << "11" << endl;
                low += 1;
                mid = (low + high) / 2;
            }
            else{
            // cout << "12" << endl;
                if(sum - arr[mid + 1] == x){
                    high = mid + 1;
                }
                else{
                    break;
                }
            }
        }
        else if(sum - arr[mid] > x){
            // cout << "2" << endl;
            low = mid + 1;
        }
        else{
            // cout << "3" << endl;
            high = mid;
        }
        mid = (low + high) / 2;
    }
    return mid;
}

int upperBound(vector<int> arr, int low, int x, int sum){
    int high = arr.size() - 1;
    int mid = (low + high) / 2;;
    while(high > low){
        // cout << low << " " << mid << " " << high << endl;
        if(sum - arr[mid] == x){
            // cout << "1" << endl;
            if(high >= low - 2){            
                // cout << "11" << endl;
                high -= 1;
                mid = (low + high) / 2;
            }
            else{
                cout << "12" << endl;
                if(sum - arr[mid + 1] == x){
                    high = mid + 1;
                }
                else{
                    break;
                }
            }
        }
        else if(sum - arr[mid] < x){
            // cout << "2" << endl;
            high = mid;
        }
        else{
            // cout << "3" << endl;
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return mid;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int temp;
        int sum = 0;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            cin >> temp;
            sum += temp;
            nums.push_back(temp);
        }

        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < n - 1; i++){
            int current = nums[i];
            int lower = lowerBound(nums, i + 1, x, sum - nums[i]);
            int upper = upperBound(nums, i + 1, y, sum - nums[i]);
            cout << lower << " " << upper << endl;
            count += lower - upper + 1;
        }
        cout << "Answer: " << count<< endl;


    }
    return 0;
}