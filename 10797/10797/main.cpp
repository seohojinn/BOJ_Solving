#include <iostream>

using namespace std;

int main() {
    
    int N = 0, count = 0;
    int arr[5] = {0,};
    
    cin >> N;
    
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<5;i++){
        if(arr[i] == N){
            count += 1;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
