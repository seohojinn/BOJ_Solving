#include <iostream>
#include <algorithm>

using namespace std;

int arr[10000];
int N;

int main() {
    
    ios::sync_with_stdio(false);
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    
    while(prev_permutation(arr,arr+N)){
        for(int i=0;i<N;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return 0;
    }
    
    cout << -1 << endl;
    
    return 0;
}
