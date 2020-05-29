#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0, k = 0, data = 0, count = 0;
    int arr[20] = {0,};
    
    cin >> N;
    
    cin >> data;
    
    if(data == 1){
        cin >> k;
        for(int i=0;i<N;i++){
            arr[i] = i + 1;
        }
        do{
            count += 1;
            if(count == k){
                for(int i=0;i<N;i++){
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
        }while(next_permutation(arr,arr+N));
    }
    
    if(data == 2){
        for(int i=0;i<N;i++){
            cin >> arr[i];
        }
        do{
            count += 1;
        }while(prev_permutation(arr,arr+N));
        cout << count << "\n";
    }
    
    
    return 0;
}
