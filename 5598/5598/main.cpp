#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char arr[33] = "XYZABCDEFGHIJKLMNOPQRSTUVWXYZABC";
    char data[1001] = {0,};
    int size = 0;
    
    cin >> data;
    
    size = int(strlen(data));
    
    for(int i=0;i<size;i++){
        for(int j=3;j<29;j++){
            if(data[i] == arr[j]){
                cout << arr[j-3];
                break;
            }
        }
    }
    
    cout << endl;
    
    return 0;
}
