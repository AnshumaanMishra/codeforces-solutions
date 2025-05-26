#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD int(7+1e9)

void solve(){
    deque<int> sticks;
    int n;
    cin >> n;
    int temp;
    for(int i = 1; i <= n; i++){
        sticks.push_back(i);
    }
    sort(sticks.begin(), sticks.end());
    deque<int> answer;
    string query;
    cin >> query;
    for(int i = query.length() - 1; i > -1; i--){
        if(query[i] == '<'){
            int num = sticks.front();
            sticks.pop_front();
            answer.push_front(num);
        }
        else{
            int num = sticks.back();
            sticks.pop_back();
            answer.push_front(num);            
        }
    }
    answer.push_front(sticks.front());

    while(!answer.empty()){
        cout << answer.front() << " ";
        answer.pop_front();
    }
    cout << endl;
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