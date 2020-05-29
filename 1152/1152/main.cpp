#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char arr[1000001] = {0,};
    int size = 0;
    int count = 0;
    
    cin.getline(arr,1000000);
    
    size = int(strlen(arr));
    
    for(int i=0;i<size;i++){
        if(i != 0 && i != size-1 && arr[i] == ' '){
            count += 1;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
