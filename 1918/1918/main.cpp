#include <iostream>
#include <cstring>
#include <deque>

using namespace std;

int main() {
    
    char arr[101] = {0,};
    int size = 0;
    char tmp = ' ';
    deque<char> word;
    deque<char> cal;
    deque<char> cal_2;
    
    cin >> arr;
    
    size = int(strlen(arr));
    
    for(int i=0;i<size;i++){
        
        if(arr[i] != '+' && arr[i] != '-' && arr[i] != '*' && arr[i] != '/' && arr[i] != '(' && arr[i] != ')'){
            word.push_back(arr[i]);
        }
        
        else if(arr[i] == '+' || arr[i] == '-'){
            if(tmp == '*' || tmp == '/'){
                while(!cal.empty()){
                    word.push_back(cal.back());
                    cal.pop_back();
                }
            }
            cal.push_back(arr[i]);
            tmp = arr[i];
        }
        
        else if(arr[i] == '*' || arr[i] == '/'){
            cal.push_back(arr[i]);
            tmp = arr[i];
        }
    }
    
    while(!cal.empty()){
        word.push_back(cal.back());
        cal.pop_back();
    }
    
    for(auto it : word){
        cout << it;
    }
    
    cout << endl;

    return 0;
}
