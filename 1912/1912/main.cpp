#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int dp[100000]={0,};
    int arr[100000]={0,};
    int n=0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(i==0){
            dp[i]=arr[i];
        }
        else if(dp[i-1]<0){
            dp[i]=arr[i];
        }
        else{
            dp[i]=dp[i-1]+arr[i];
        }
    }
    
//    for(int i=0;i<n;i++){
//        cout << dp[i] << " ";
//    }
//
//    cout << endl;
    
    cout << *max_element(dp,dp+n) << endl;
    
    return 0;
}
