#include <iostream>

using namespace std;

int main() {
    
    int arr[10] = {0,};
    int arr2[10] = {0,};
    int a = 0, b = 0;
    
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i++){
        cin >> arr2[i];
    }
    
    for(int i=0;i<10;i++){
        if(arr[i] > arr2[i]){
            a += 1;
        }
        else if(arr[i] < arr2[i]){
            b += 1;
        }
    }
    
    if(a > b){
        cout << "A" << endl;
    }
    else if(b > a){
        cout << "B" << endl;
    }
    else{
        cout << "D" << endl;
    }
    
    return 0;
}
