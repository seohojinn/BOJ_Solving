#include <iostream>

using namespace std;

int main() {
    
    int N = 0;
    
    cin >> N;
    
    if(N == 0){
        cout << 0 << "\n";
        return 0;
    }
    
    while(N != 0){
        cout << N%10;
        N /= 10;
    }
    
    cout << "\n";
    
    return 0;
}
