#include <iostream>

using namespace std;

int main() {
    
    int N = 0, value = 0;
    int sum = 0, data = 0;
    
    cin >> N;
    
    for(int i=N-1;i>=1;i--){
        data = i;
        sum = data;
        while(data != 0){
            sum += data%10;
            data /= 10;
        }
        if(sum == N){
            value = i;
        }
    }
    
    cout << value << endl;
    
    return 0;
}
