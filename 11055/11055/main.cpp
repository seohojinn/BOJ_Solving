#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n=0;
    int arr[1000]={0,};
    int dp[1000]={0,};
    int max=0,max_idx=0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    dp[0]=arr[0];
    
    for(int i=1;i<n;i++){
        max=0;
        max_idx=-1;
        
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && dp[j]+arr[i]>max){
                max=dp[j]+arr[i];
                max_idx=j;
            }
        }
        if(max_idx==-1){
            dp[i]=arr[i];
        }
        else{
            dp[i]=arr[i]+dp[max_idx];
        }
    }
    
//    for(int i=0;i<n;i++){
//        cout << dp[i] << " ";
//    }
//    cout << endl;
    
    cout << *max_element(dp,dp+n) << endl;
    
    return 0;
}
