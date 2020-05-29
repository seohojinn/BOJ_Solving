#include <iostream>

using namespace std;

int main() {
    
    int A = 0, B = 0, V = 0, value = 1;
    
    cin >> A >> B >> V;
    
    V = V - A;
    
    value += V / (A - B);
    
    if(V % (A - B) != 0 ){
        value += 1;
    }
    
    cout << value << endl;
    
    
    return 0;
}
