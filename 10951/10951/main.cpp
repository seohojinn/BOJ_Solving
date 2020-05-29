#include <iostream>

using namespace std;

int main() {
    
    int a = 0, b = 0;
    
    cin >> a >> b;
    
    do{
        cout << a + b << endl;
        cin >> a >> b;
    }while(!cin.eof());
    
    return 0;
}
