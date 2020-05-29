#include <iostream>

using namespace std;

int main() {
    
    int E = 0, S = 0, M = 0;
    int a = 1, b = 1, c = 1;
    int count = 1;
    
    cin >> E >> S >> M;
    
    while(1){
        if(E == a && S == b && M == c){
            break;
        }
        a += 1;
        b += 1;
        c += 1;
        if(a == 16){
            a = 1;
        }
        if(b == 29){
            b = 1;
        }
        if(c == 20){
            c = 1;
        }
        count += 1;
    }
    
    cout << count << endl;
    
    return 0;
}
