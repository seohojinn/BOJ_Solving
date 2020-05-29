#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    int arr[20] = {0,};
    deque<int> data;
    int a = 0, b = 0;
    
    for(int i=0;i<20;i++){
        arr[i] = i + 1;
    }
    
    for(int i=0;i<10;i++){
        cin >> a >> b;
        for(int i=a-1;i<b;i++){
            data.push_back(arr[i]);
        }
        for(int i=b-1;i>=a-1;i--){
            arr[i] = data.front();
            data.pop_front();
        }
    }
    
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}
