#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[1000] = {0,};
    int dp[1000] = {0,};
    int N = 0, idx = 0;
    
    cin >> N;
    
    dp[0] = 1;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for(int i=1;i<N;i++){
        idx = 0;
        for(int j=0;j<i;j++){
            if(arr[i] < arr[j] && idx < dp[j]){
                idx = dp[j];
            }
        }
        if(idx == 0){
            dp[i] = 1;
        }
        else{
            dp[i] = idx + 1;
        }
    }
    
    
    cout << *max_element(dp, dp+N) << "\n";
    
    return 0;
}
