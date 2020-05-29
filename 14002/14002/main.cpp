#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int arr[1000] = {0,};
    int dp[1000] = {0,};
    deque<int> value;
    int N = 0, max_value = 0, max_value2 = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    dp[0] = 1;
    
    for(int i=1;i<N;i++){
        max_value = 0;
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i] && max_value < dp[j]){
                max_value = dp[j];
            }
        }
        if(max_value == 0){
            dp[i] = 1;
        }
        else{
            dp[i] = max_value + 1;
        }
    }
    
    max_value =  *max_element(dp,dp+N);
    
    for(int i=max_value;i>0;i--){
        max_value2 = 0;
        for(int j=0;j<N;j++){
            if(i == dp[j] && max_value2 < arr[j] && (value.empty() || arr[j] < value.front())){
                max_value2 = arr[j];
            }
        }
        value.push_front(max_value2);
    }
    
    cout << max_value << "\n";
    
    for(auto it : value){
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}
