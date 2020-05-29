#include <iostream>

using namespace std;

int main() {
    
    unsigned long long data = 1;
    int N = 0, count = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        data *= i+1;
        cout << data << endl;
    }
    
    cout << data << endl;
    
//    while(data % 10 == 0){
//        count += 1;
//        data /= 10;
//    }
//
//    cout << count << endl;
    
    return 0;
}
