#include <iostream>

using namespace std;

int main() {
    
    int a = 0 , d = 0, k = 0, count = 1;
    
    cin >> a >> d >> k;
    
    while(1){
        if(a > 1000000 || a < -1000000){
            cout << "X" << endl;
            break;
        }
        else if(a == k){
            cout << count << endl;
            break;
        }
        a += d;
        count += 1;
    }
    
    return 0;
}
