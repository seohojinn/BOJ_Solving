#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    
    int arr[1000] = {0,};
    int dp[1000] = {0,};
    int N = 0, max_data = 0, min_data = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for(int i=1;i<N;i++){
        
        max_data = INT_MIN;
        min_data = INT_MAX;
        
        for(int j=i;j>=0;j--){
            max_data = max(max_data,arr[j]);
            min_data = min(min_data,arr[j]);
            if(j == 0){
                dp[i] = max(dp[i], max_data - min_data);
            }
            else{
                dp[i] = max(dp[i], (max_data - min_data) + dp[j-1]);
            }
        }
    }

    
    cout << dp[N-1] << "\n";
    
    return 0;
}
