#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[100][100] = {0,};
    int n = 0, m = 0, a = 0, b = 0, c = 0;
    
    cin >> n;
    cin >> m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j){
                arr[i][j] = INT_MAX;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        if(arr[a-1][b-1] > c){
            arr[a-1][b-1] = c;
        }
    }
    
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][k] != INT_MAX && arr[k][j] != INT_MAX){
                    arr[i][j] = min(arr[i][k] + arr[k][j], arr[i][j]);
                }
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == INT_MAX){
                cout << 0 << " ";
            }
            else{
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    
    
    return 0;
}
