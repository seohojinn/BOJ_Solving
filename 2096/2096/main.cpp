#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0;
    int a = 0, b = 0, c = 0;
    int max_a = 0, max_b = 0, max_c = 0;
    int min_a = 0, min_b = 0, min_c = 0;
    int value = 0, value2 = 0, value3 = 0;
    int value4 = 0, value5 = 0, value6 = 0;
    
    cin >> N;
    
    cin >> a >> b >> c;
    
    max_a = min_a = a;
    max_b = min_b = b;
    max_c = min_c = c;
    
    for(int i=1;i<N;i++){
        cin >> a >> b >> c;
        value = a + max(max_a,max_b);
        value2 = b + max(max(max_a,max_b),max_c);
        value3 = c + max(max_b,max_c);
        
        max_a = value;
        max_b = value2;
        max_c = value3;
        
        value4 = a + min(min_a,min_b);
        value5 = b + min(min(min_a,min_b),min_c);
        value6 = c + min(min_b,min_c);
        
        min_a = value4;
        min_b = value5;
        min_c = value6;
    }
  

    cout << max(max_a,max(max_b,max_c)) << " ";
    cout << min(min_a,min(min_b,min_c)) << "\n";
    
    return 0;
}
