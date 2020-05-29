#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[1000] = {0,};
    int dp[1000] = {0,};
    int N = 0, max = 0;
    
    dp[0] = 1;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for(int i=1;i<N;i++){
        max = 0;
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i] && max < dp[j]){
                max = dp[j];
            }
        }
        if(max == 0){
            dp[i] = 1;
        }
        else{
            dp[i] = max + 1;
        }
    }
    
    cout << *max_element(dp,dp+N) << "\n";

    return 0;
}
