#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int T=0,n=0;
    int arr[2][100000]={0,};
    int dp[2][100000]={0,};
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> n;
        for(int j=0;j<2;j++){
            for(int k=0;k<n;k++){
                cin >> arr[j][k];
            }
        }
        dp[0][0]=arr[0][0];
        dp[1][0]=arr[1][0];
        for(int j=1;j<n;j++){
            for(int k=0;k<2;k++){
                if(j==1){
                    if(k==0){
                        dp[k][j]=arr[k][j]+dp[k+1][j-1];
                    }
                    else if(k==1){
                        dp[k][j]=arr[k][j]+dp[k-1][j-1];
                    }
                }
                else{
                    if(k==1){
                        dp[k][j]=arr[k][j]+max(dp[k-1][j-1],dp[k-1][j-2]);
                    }
                    else if(k==0){
                        dp[k][j]=arr[k][j]+max(dp[k+1][j-1],dp[k+1][j-2]);
                    }
                }
            }
        }
        cout << max(dp[0][n-1],dp[1][n-1]) << endl;
        for(int j=0;j<2;j++){
            for(int k=0;k<n;k++){
                dp[j][k]=0;
                arr[j][k]=0;
            }
        }
    }
    
    
    return 0;
}

