#include <iostream>

using namespace std;

int main() {
    
    int K = 0, N = 0, M = 0, value = 0;
    
    cin >> K >> N >> M;
    
    value = K * N;
    
    if(value > M){
        cout << value - M << "\n";
    }
    else{
        cout << 0 << "\n";
    }
    
    return 0;
}
