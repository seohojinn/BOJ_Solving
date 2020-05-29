#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int t = 0, n = 0;
    unsigned long long arr[68] = {1,1,2,4};
    
    for(int i=4;i<68;i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
    }
    
    cin >> t;
    
    for(int i=0;i<t;i++){
        cin >> n;
        cout << arr[n] << "\n";
    }
    
    return 0;
}
