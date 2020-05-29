#include <iostream>

using namespace std;

int main() {
    
    int arr[100] = {0,};
    int count = 0, count2 = 0, sex = 0, value = 0, idx_right = 0, idx_left = 0, change_line = 20;
    
    cin >> count;
    
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    
    cin >> count2;
    
    for(int i=0;i<count2;i++){
        cin >> sex >> value;
    
        if(sex == 1){
            idx_right = value - 1;
            while(idx_right < count){
                arr[idx_right] = (arr[idx_right] == 1) ? 0 : 1;
                idx_right += value;
            }
        }
        else{
            arr[value-1] = (arr[value-1] == 1) ? 0 : 1;
            idx_right = value;
            idx_left = value - 2;
            while(1){
                if(arr[idx_right] != arr[idx_left] || idx_left < 0 || idx_right > count-1){
                    break;
                }
                arr[idx_right] = (arr[idx_right] == 1) ? 0 : 1;
                arr[idx_left] = (arr[idx_left] == 1) ? 0 : 1;
                idx_right += 1;
                idx_left -= 1;
            }
        }
    }
    
    for(int i=0;i<count;i++){
        if(i == change_line){
            cout << "\n";
            change_line += 20;
        }
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
