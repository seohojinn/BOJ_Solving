#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int value[26] = {0,};
    char arr[1000001] = {0,};
    int size = 0, count = 0;
    int max_value = 0, idx = 0;
    
    cin >> arr;
    
    size = int(strlen(arr));
    
   
    for(int i=0;i<size;i++){
        if(arr[i] < 91){
            value[arr[i]-65] += 1;
        }
        else{
            value[arr[i]-97] += 1;
        }
    }
    
    max_value = *max_element(value,value+26);
    
    
    
    for(int i=0;i<26;i++){
        if(value[i] == max_value){
            count += 1;
            idx = i;
        }
        if(count > 1){
            cout << "?" << "\n";
            return 0;
        }
    }
    
    cout << char(65 + idx) << "\n";
    
    return 0;
}
