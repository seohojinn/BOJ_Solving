#include <iostream>

using namespace std;

int main() {
    
    int n = 0, data = 0, count = 0;
    int i_value = 0;
    
    cin >> n >> data;
    
    for(int i=1;i<=n;i++){
        i_value = i;
        while(i_value != 0){
            if(i_value % 10 == data){
                count += 1;
            }
            i_value /= 10;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
