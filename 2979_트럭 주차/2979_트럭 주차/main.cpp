#include <iostream>

using namespace std;

int main() {
    
    int arr[100] = {0,};
    int A = 0, B = 0, C = 0, begin = 0, end = 0, sum = 0;
    
    cin >> A >> B >> C;
    
    for(int i=0;i<3;i++){
        cin >> begin >> end;
        for(int j=begin-1;j<end-1;j++){
            arr[j] += 1;
        }
    }
    
    for(int i=0;i<100;i++){
        if(arr[i] == 1){
            sum += A;
        }
        else if(arr[i] == 2){
            sum += B * 2;
        }
        else if(arr[i] == 3){
            sum += C * 3;
        }
    }
    
    cout << sum << "\n";
    
    return 0;
}
