#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N = 0, M = 0, A = 0, B = 0, min_value = INT_MAX, idx = -1;
    int arr[100][100] = {0,};
    int value[100] = {0,};
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i != j){
                arr[i][j] = INT_MAX;
            }
        }
    }
    
    for(int i=0;i<M;i++){
        cin >> A >> B;
        arr[A-1][B-1] = 1;
        arr[B-1][A-1] = 1;
    }
    
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(arr[i][k] != INT_MAX && arr[k][j] != INT_MAX){
                    arr[i][j] = min(arr[i][j],arr[i][k] + arr[k][j]);
                }
            }
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            value[i] += arr[j][i];
        }
    }
    
    for(int i=0;i<N;i++){
        if(min_value > value[i]){
            min_value = value[i];
            idx = i;
        }
    }

    cout << idx + 1 << "\n";
    
    return 0;
}
