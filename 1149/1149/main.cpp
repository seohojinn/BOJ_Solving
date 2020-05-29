#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    
    int N=0;
    int arr[1000][3]={0,};
    int dp[1000][3]={0,};
    int min=INT_MAX;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
            if(i==0){
                dp[i][j]=arr[i][j];
            }
        }
    }
    
    if(N==0){
        for(int i=0;i<3;i++){
            if(dp[0][i]<min){
                min=dp[0][i];
            }
        }
        cout << min << endl;
    }
    else{
        for(int i=1;i<N;i++){
            for(int j=0;j<3;j++){
                if(j==0){
                    if(dp[i-1][j+1]>=dp[i-1][j+2]){
                        dp[i][j]=arr[i][j]+dp[i-1][j+2];
                    }
                    else if(dp[i-1][j+1]<=dp[i-1][j+2]){
                        dp[i][j]=arr[i][j]+dp[i-1][j+1];
                    }
                }
                else if(j==1){
                    if(dp[i-1][j-1]>=dp[i-1][j+1]){
                        dp[i][j]=arr[i][j]+dp[i-1][j+1];
                    }
                    else if(dp[i-1][j-1]<=dp[i-1][j+1]){
                        dp[i][j]=arr[i][j]+dp[i-1][j-1];
                    }
                }
                else if(j==2){
                    if(dp[i-1][j-1]>=dp[i-1][j-2]){
                        dp[i][j]=arr[i][j]+dp[i-1][j-2];
                    }
                    else if(dp[i-1][j-1]<=dp[i-1][j-2]){
                        dp[i][j]=arr[i][j]+dp[i-1][j-1];
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            if(dp[N-1][i]<min){
                min=dp[N-1][i];
            }
        }
        cout << min << endl;
    }

    return 0;
}
