#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr;
    int N = 0, size = 0;
    
    cin >> N;
    
    while(N != 0){
        arr.push_back(N % 10);
        N /= 10;
    }
    
    sort(arr.begin(),arr.end());
    
    size = int(arr.size());
    
    for(int i=size-1;i>=0;i--){
        cout << arr[i];
    }
    cout << endl;
    
    return 0;
}
