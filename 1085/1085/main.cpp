#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int x = 0, y = 0, w = 0, h = 0;
    
    cin >> x >> y >> w >> h;
    
    cout << min(min(w-x,x-0),min(h-y,y-0)) << endl;
    
    
    return 0;
}
