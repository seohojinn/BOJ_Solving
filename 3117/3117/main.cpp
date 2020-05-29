#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    
    int arr[11][11] = {0,};
    int N = 0, bit = 0, value = 0;
    pair<int,int> location = {1,1};
    
    cin >> N;
    
    value = N * N;
    
    for(int i=1;i<=value;i++){
        arr[location.first][location.second] = i;
        if(bit == 0){
            if(location.second == N || arr[location.first][location.second+1] != 0){
                bit = 1;
                location.first += 1;
            }
            else{
                location.second += 1;
            }
        }
        else if(bit == 1){
            if(location.first == N || arr[location.first+1][location.second] != 0){
                bit = 2;
                location.second -= 1;
            }
            else{
                location.first += 1;
            }
        }
        else if(bit == 2){
            if(location.second == 1 || arr[location.first][location.second-1] != 0){
                bit = 3;
                location.first -= 1;
            }
            else{
                location.second -= 1;
            }
        }
        else if(bit == 3){
            if(location.first == 1 || arr[location.first-1][location.second] != 0){
                bit = 0;
                location.second += 1;
            }
            else{
                location.first -= 1;
            }
        }
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
