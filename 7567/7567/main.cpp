#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char arr[51] = {0,};
    int size = 0;
    int count = 10;
    
    cin >> arr;
    
    size = int(strlen(arr));
    
    for(int i=1;i<size;i++){
        if(arr[i-1] == ')'){
            if(arr[i] == ')'){
                count += 5;
            }
            else if(arr[i] == '('){
                count += 10;
            }
        }
        else if(arr[i-1] == '('){
            if(arr[i] == '('){
                count += 5;
            }
            else if(arr[i] == ')'){
                count += 10;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
