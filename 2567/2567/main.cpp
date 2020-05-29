#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[105][105] = {0,};
    int N = 0, data = 0, data2 = 0, count = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data >> data2;
        for(int j=data2;j<data2+10;j++){
            for(int k=data;k<data+10;k++){
                arr[j][k] = 1;
            }
        }
    }
    
    for(int i=0;i<103;i++){
        for(int j=0;j<103;j++){
            if(arr[i][j] == 0 && arr[i][j+1] == 1){
                count += 1;
            }
        }
    }
    for(int i=0;i<103;i++){
        for(int j=0;j<103;j++){
            if(arr[j][i] == 0 && arr[j+1][i] == 1){
                count += 1;
            }
        }
    }
    for(int i=104;i>0;i--){
        for(int j=104;j>0;j--){
            if(arr[i][j] == 0 && arr[i][j-1] == 1){
                count += 1;
            }
        }
    }
    for(int i=104;i>0;i--){
        for(int j=104;j>0;j--){
            if(arr[j][i] == 0 && arr[j-1][i] == 1){
                count += 1;
            }
        }
    }

    cout << count << "\n";
    
    return 0;
}
