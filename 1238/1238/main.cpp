#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[1000][1000] = {0,};
    int N = 0, M = 0, X = 0;
    int v1 = 0, v2 = 0, t = 0, max = 0;
    
    cin >> N >> M >> X;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i != j){
                arr[i][j] = INT_MAX;
            }
        }
    }
    
    for(int i=0;i<M;i++){
        cin >> v1 >> v2 >> t;
        arr[v1-1][v2-1] = t;
    }
    
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(arr[i][k] != INT_MAX && arr[k][j] != INT_MAX){
                    arr[i][j] = min(arr[i][k] + arr[k][j], arr[i][j]);
                }
            }
        }
    }
    
    for(int i=0;i<N;i++){
        if(max < arr[i][X-1] + arr[X-1][i]){
            max = arr[i][X-1] + arr[X-1][i];
        }
    }
    
    cout << max << "\n";
    
    return 0;
}
