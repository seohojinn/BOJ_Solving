#include <iostream>

using namespace std;

int main() {
    
    int N = 0;
    int data = 0, data2 = 0, data3 = 0;
    int max_value = 0, max_idx = -1;
    int arr[3][4] = {0,};
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data >> data2 >> data3;
        arr[0][0] += data;
        arr[1][0] += data2;
        arr[2][0] += data3;
        arr[0][data] += 1;
        arr[1][data2] += 1;
        arr[2][data3] += 1;
    }
    
    for(int i=0;i<3;i++){
        if(max_value < arr[i][0]){
            max_value = arr[i][0];
            max_idx = i + 1;
        }
        else if(max_value == arr[i][0]){
            max_idx = -1;
        }
    }
    
    if(max_idx != -1){
        cout << max_idx << " " << arr[max_idx-1][0] << endl;
        return 0;
    }
    
    max_value = 0;
    for(int i=0;i<3;i++){
        if(max_value < arr[i][3]){
            max_value = arr[i][3];
            max_idx = i + 1;
        }
        else if(max_value == arr[i][3]){
            max_idx = -1;
        }
    }
    
    if(max_idx != -1){
        cout << max_idx << " " << arr[max_idx-1][0] << endl;
        return 0;
    }
    
    max_value = 0;
    for(int i=0;i<3;i++){
        if(max_value < arr[i][2]){
            max_value = arr[i][2];
            max_idx = i + 1;
        }
        else if(max_value == arr[i][2]){
            max_idx = -1;
        }
    }
    
    if(max_idx != -1){
        cout << max_idx << " " << arr[max_idx-1][0] << endl;
        return 0;
    }
    
    max_value = 0;
    for(int i=0;i<3;i++){
        if(max_value < arr[i][0]){
            max_value = arr[i][0];
        }
    }
    
    cout << 0 << " " << max_value << endl;
    
    return 0;
}
