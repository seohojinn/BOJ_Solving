#include <iostream>

using namespace std;

int main() {
    
    int N = 0;
    int arr[100] = {0,};
    int count = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<N;i++){
        for(int j=2;j<=arr[i];j++){
            if(arr[i] == 3 || arr[i] == 2){
                count += 1;
                break;
            }
            else if(j == arr[i]){
                count += 1;
            }
            else if(arr[i] % j == 0){
                break;
            }
        }
    }
    
    
    cout << count << endl;
    
    return 0;
}
