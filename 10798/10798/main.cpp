#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    
    char arr[5][16] = {0,};
    
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(arr[j][i]!=NULL){
                cout << arr[j][i];
            }
        }
    }
    cout << endl;
    
    
    return 0;
}
