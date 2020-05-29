#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int a = 0, b = 0,min_data = 0;
    int friend_count = 1;
    
    cin >> a >> b;
    
    min_data = min(a,b);
    
    while(min_data >= friend_count){
        
        if(a % friend_count == 0 && b % friend_count == 0){
            cout << friend_count << " " << a / friend_count << " " << b / friend_count << endl;
        }
        
        friend_count += 1;
    }
    
    return 0;
}
