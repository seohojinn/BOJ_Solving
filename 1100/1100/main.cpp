#include <iostream>

using namespace std;

int main() {
    
    char arr[9][9] = {0,};
    int value = 0, bit = 0;
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(bit == 0 && j%2 == 0 && arr[i][j] == 'F'){
                value += 1;
            }
            else if(bit == 1 && j%2 == 1 && arr[i][j] == 'F'){
                value += 1;
            }
            
        }
        if(bit == 0){
            bit = 1;
        }
        else{
            bit = 0;
        }
    }
    
    cout << value << endl;
    
    return 0;
}
