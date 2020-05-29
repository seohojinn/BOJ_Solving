#include <iostream>

using namespace std;

int main() {
    
    int dp[1000][10]={0,};
    int n=0;
    int sum=0;
    cin >> n;
    
    for(int i=0;i<10;i++){
        dp[0][i]=1;
    }
    
  
    for(int i=1;i<n;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<=j;k++){
                dp[i][j]+=dp[i-1][k];
                dp[i][j]=dp[i][j]%10007;
            }
        }
    }
    
    
    for(int i=0;i<10;i++){
        sum += dp[n-1][i];
        sum = sum%10007;
    }
    
    cout << sum << endl;
    
    
    return 0;
}
