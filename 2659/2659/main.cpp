#include <iostream>
#include <deque>
#include <climits>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    deque<int> arr;
    deque<int> arr2;
    int data = 0, min = INT_MAX, count = 0;
    
    for(int i=0;i<4;i++){
        cin >> data;
        arr.push_back(data);
    }
    
    for(int i=0;i<4;i++){
        data = 0;
        for(int j=0;j<4;j++){
            data += arr[j];
            data *= 10;
        }
        data /= 10;
        if(data < min){
            min = data;
        }
        arr.push_back(arr.front());
        arr.pop_front();
    }
    
    
    
    
    while(1){
        
        
    }
    
    cout << count << "\n";

    
    return 0;
}
