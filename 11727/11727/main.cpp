#include <iostream>

using namespace std;

int main() {
    
    int N=0;
    int arr[1000]={1,3,5};
    cin >> N;
    
    if(N<4){
        cout << arr[N-1] << endl;
    }
    
    else{
        for(int i=3;i<N;i++){
            arr[i]=((arr[i-2]*2)+arr[i-1])%10007;
        }
        cout << arr[N-1] << endl;
    }
    
    return 0;
}
