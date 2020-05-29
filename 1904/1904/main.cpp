#include <iostream>

using namespace std;

int main() {
    
    int arr[1000000] = {0,};
    int N = 0;
    
    arr[0] = 1;
    arr[1] = 2;
    
    cin >> N;
    
    if(N < 3){
        cout << arr[N-1] << endl;
    }
    else{
        for(int i=2;i<N;i++){
            arr[i] = (arr[i-1] + arr[i-2]) % 15746;
        }
        
        cout << arr[N-1] << endl;
        
    }

    
    return 0;
}
