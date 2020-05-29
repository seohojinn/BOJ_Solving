#include <iostream>

using namespace std;

int main(){
    
    int arr[100] = {0,};
    int N = 0, value = 0;
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for(int i=N-1;i>0;i--){
        if(arr[i] < arr[i-1]){
            value += (arr[i-1] - arr[i]) + 1;
            arr[i-1] = arr[i] - 1;
        }
        else if(arr[i] == arr[i-1]){
            value += 1;
            arr[i-1] -= 1;
        }
    }
        
    cout << value << endl;
    
    return 0;
}

