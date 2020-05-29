#include <iostream>

using namespace std;

int main() {
    
    int N = 0, data = 0, count = 0, tmp = 0, i = 0;
    
    cin >> N;
    
    if(N % 5 == 0){
        cout << N / 5 << endl;
        return 0;
    }
    
    else if(N % 10 <= 5){
        data = N + (5 - (N % 10));
    }
    
    else{
        data = N + (10 - (N % 10));
    }
  
    count = data / 5;
    
    while(data > 0){
        data -= 5;
        count -= 1;
        
        tmp = data;
        i = 0;
        while(tmp < N){
            i += 1;
            tmp += 3;
            if(tmp == N){
                cout << count + i << endl;
                return 0;
            }
        }
    }
    
    cout << -1 << endl;
    
    return 0;
}
