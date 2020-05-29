#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[1000]={0,};
    int dp[1000]={0,};
    int N=0;
    int max_data=0;
    
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    dp[0] = 1;
    
    for(int i=1;i<N;i++){
        max_data=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && max_data<dp[j]){
                max_data=dp[j];
            }
        }
        if(max_data==0){
            dp[i]=1;
        }
        else{
            dp[i]=max_data+1;
        }
    }
    for(int i=0;i<N;i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    
    cout << *max_element(dp,dp+N) << endl;
    
    
    return 0;
}
