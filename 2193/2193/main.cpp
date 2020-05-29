#include <iostream>

using namespace std;

int main() {
    
    unsigned long long dp[90]={1,1,};
    int N=0;
    
    cin >> N;
    
    if(N==1 || N==2){
        cout << dp[N-1] << endl;
    }
    else{
        for(int i=2;i<N;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        cout << dp[N-1] << endl;
    }
    
    return 0;
}
