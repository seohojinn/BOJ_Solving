#include <iostream>

using namespace std;

int main() {
    
    char data[101] = {0,};
    
    while(1){
        cin.getline(data,100);
        if(cin.eof()){
            break;
        }
        cout << data << endl;
    }
    
    return 0;
}
