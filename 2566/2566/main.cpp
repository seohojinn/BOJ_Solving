#include <iostream>

using namespace std;

int main() {
    
    int arr[9][9] = {0,};
    int max = -1, idx = 0, idx2 = 0;
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> arr[i][j];
            if(arr[i][j] > max){
                max = arr[i][j];
                idx = i;
                idx2 = j;
            }
        }
    }
    
    cout << max << "\n";
    cout << idx+1 << " " << idx2+1 << "\n";
    
    return 0;
}
