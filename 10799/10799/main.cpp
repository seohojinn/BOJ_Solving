#include <iostream>
#include <cstring>
#include <deque>

using namespace std;

int main(){
    
    int size = 0, count = 0, str_size = 0;
    char arr[100001] = {0,};
    char tmp = ' ';
    deque<char> data;
    
    cin >> arr;
    str_size = int(strlen(arr));
    
    for(int i=0;i<str_size;i++){
        if(arr[i] == '('){
            data.push_back(arr[i]);
            size += 1;
        }
        else if(arr[i] == ')'){
            size -= 1;
            if(tmp == '('){
                count += size;
            }
            else if(tmp == ')'){
                count += 1;
            }
            data.pop_back();
            
        }
        tmp = arr[i];
    }
    
    
    cout << count << endl;
    
    return 0;
}
