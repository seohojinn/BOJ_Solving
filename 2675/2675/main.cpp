#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    char arr[21] = {0,};
    int T = 0, R = 0, size = 0;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> R >> arr;
        size = int(strlen(arr));
        
        for(int j=0;j<size;j++){
            for(int k=0;k<R;k++){
                cout << arr[j];
            }
        }
        cout << "\n";
    }
    
    
    return 0;
}
