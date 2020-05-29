#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int T = 0, N = 0, tmp = 0;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> N;
        tmp = N / 2;
        while(1){
            if(tmp * tmp + tmp <= N){
                cout << tmp << "\n";
                break;
            }
            tmp -= 1 ;
        }
    }
    
    return 0;
}
