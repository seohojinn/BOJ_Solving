#include <iostream>

using namespace std;

int main() {
    
    int data = 0, tmp = 0;
    int bit = 0;
    
    while(1){
        cin >> data;
        if(cin.eof()){
            break;
        }
        else if(tmp != 0 && tmp > data){
            bit = 1;
        }
        tmp = data;
    }
    
    if(bit == 0){
        cout << "Good" << endl;
    }
    else{
        cout << "Bad" << endl;
    }
    
    return 0;
}
