#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0, count = 0;
    int arr[10000] = {0,};
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    do{
        count += 1;
        if(count == 2){
            for(int i=0;i<N;i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
            return 0;
        }
        
    }while(next_permutation(arr,arr+N));
    
    cout << -1 << endl;
    
    return 0;
    
}
