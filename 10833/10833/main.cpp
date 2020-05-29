#include <iostream>

using namespace std;

int main() {
    

    int N = 0, data = 0, data2 = 0, sum = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data >> data2;
        
        sum += data2 % data;
            
    }
    
    cout << sum << endl;
    
    return 0;
}
