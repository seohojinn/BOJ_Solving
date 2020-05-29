#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0, count = 2;
    
    cin >> N;
    
    while(N != 1){
        if(N % count == 0){
            cout << count << "\n";
            N /= count;
        }
        else{
            count += 1;
        }
    }
    
    return 0;
}
