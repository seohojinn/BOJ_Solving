#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    int e = 0, f = 0, g = 0, h = 0;
    
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    
    cout << max(a+b+c+d,e+f+g+h) << endl;
    
    
    return 0;
}
