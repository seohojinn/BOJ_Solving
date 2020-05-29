#include <iostream>

using namespace std;

int main() {
    
    int N=0;
    int value=0;
    int dp[10][100]={0,};
    cin >> N;
    
    for(int i=0;i<10;i++){
        if(i!=0){
            dp[i][0]=1;
        }
    }
    if(N==1){
        cout << 9 << endl;
    }
    else{
    
        for(int i=0;i<N-1;i++){
            for(int j=0;j<10;j++){
                if(j-1>=0 && dp[j][i]!=0){
                    dp[j-1][i+1]+=dp[j][i];
                    dp[j-1][i+1]=dp[j-1][i+1]%1000000000;
                }
                if(j+1<=9 && dp[j][i]!=0){
                    dp[j+1][i+1]+=dp[j][i];
                    dp[j+1][i+1]=dp[j][i]%1000000000;
                }
            }
            
        }
        for(int i=0;i<10;i++){
            value+=dp[i][N-1];
            value=value%1000000000;
        }
    
        cout << value << endl;
    }
    
    return 0;
}
