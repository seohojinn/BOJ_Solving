#include <iostream>

using namespace std;

int main() {
    
    int L = 0, P = 0;
    int data[5] = {0,};
    
    cin >> L >> P;
    
    for(int i=0;i<5;i++){
        cin >> data[i];
        data[i] = data[i] - (L * P);
    }
    
    for(int i=0;i<5;i++){
        cout << data[i] << " ";
    }
    cout << endl;
    
    return 0;
}
