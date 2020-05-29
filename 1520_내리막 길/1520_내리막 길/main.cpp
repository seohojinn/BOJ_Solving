#include <iostream>

using namespace std;

int M, N;
int arr[500][500];
int dp[500][500];
bool check[500][500];

int dfs(int vertical, int horizontal){

    bool bit = false;
    
    if(vertical == M-1 && horizontal == N-1){
        return 1;
    }
    if(dp[vertical][horizontal] != 0){
        return dp[vertical][horizontal];
    }
    
    for(int i=0;i<4;i++){
        if(i == 0 && vertical != M-1 && arr[vertical][horizontal] > arr[vertical+1][horizontal] && check[vertical+1][horizontal] == false){
            dp[vertical][horizontal] += dfs(vertical+1,horizontal);
            bit = true;
        }
        else if(i == 1 && horizontal != N-1 && arr[vertical][horizontal] > arr[vertical][horizontal+1] && check[vertical][horizontal+1] == false){
            dp[vertical][horizontal] += dfs(vertical,horizontal+1);
            bit = true;
        }
        else if(i == 2 && vertical != 0 && arr[vertical][horizontal] > arr[vertical-1][horizontal] && check[vertical-1][horizontal] == false){
            dp[vertical][horizontal] += dfs(vertical-1,horizontal);
            bit = true;
        }
        else if(i == 3 && horizontal != 0 && arr[vertical][horizontal] > arr[vertical][horizontal-1] && check[vertical][horizontal-1] == false){
            dp[vertical][horizontal] += dfs(vertical, horizontal-1);
            bit = true;
        }
    }
    
    if(bit == false){
        check[vertical][horizontal] = true;
    }
    
    return dp[vertical][horizontal];
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> M >> N;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }

    cout << dfs(0,0) << endl;

    return 0;
}
