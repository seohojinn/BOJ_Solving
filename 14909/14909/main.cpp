#include <iostream>

using namespace std;

int main() {
    
    int data = 0, count = 0;
    
    
    while(1){
        cin >> data;
        
        if(cin.eof()){
            cout << count << endl;
            return 0;
        }
        
        else if(data > 0){
            count += 1;
        }

    }
    
    return 0;
}
