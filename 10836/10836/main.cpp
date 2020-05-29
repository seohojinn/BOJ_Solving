#include <iostream>
#include <utility>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int arr[700][700] = {0,};
    int M = 0, N = 0;
    int data[3] = {0,};
    pair<int,int> idx;
    
    cin >> M >> N;
    
    for(int i=0;i<N;i++){
        cin >> data[0] >> data[1] >> data[2];
        idx.first = M - 1;
        idx.second = 0;
        
        for(int k=0;k<data[0];k++){
            if(idx.first != 0){
                idx.first -=1;
            }
            else{
                idx.second += 1;
            }
        }
        for(int k=0;k<data[1];k++){
            arr[idx.first][idx.second] += 1;
            if(idx.first != 0){
                idx.first -=1;
            }
            else{
                idx.second += 1;
            }
        }
        for(int k=0;k<data[2];k++){
            arr[idx.first][idx.second] += 2;
            if(idx.first != 0){
                idx.first -=1;
            }
            else{
                idx.second += 1;
            }
        }
    }
    
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(j == 0 || i == 0){
                cout << arr[i][j] + 1 << " ";
            }
            else{
                cout << arr[0][j] + 1 << " ";
            }
        }
        cout << "\n";
    }
    
    
    return 0;
}
