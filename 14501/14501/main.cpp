#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N=0;
    int T[1000]={0,};
    int P[1000]={0,};
    int dp[1000]={0,};
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> T[i] >> P[i];
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(T[j]+j<=i && dp[i]<dp[j] && T[i]+i<=N){
                dp[i]=dp[j];
            }
        }
        if(i+T[i]<=N){
            dp[i]+=P[i];
        }
    }
    
//    cout << "------------------" << endl;
//    for(int i=0;i<N;i++){
//        cout << dp[i] << " ";
//    }
//    
//    cout << endl;
//    cout << "------------------" << endl;
    
    cout << *max_element(dp,dp+N) << endl;
    
    return 0;
    
}
