#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int k = 0, h = 0, a = 0, b = 0;
    int max_value = 0;
    vector<int> value;
    
    cin >> k >> h;
    
    max_value = max(k,h);
    
    for(int i=1;i<=max_value;i++){
        if(i % 2 == 1){
            a += 1;
            value.push_back(a);
        }
        else{
            b += 10;
            value.push_back(b);
        }
    }
    
    cout << value[k-1] + value[h-1] <<  endl;
    
    return 0;
}
