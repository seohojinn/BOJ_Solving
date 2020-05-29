#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    priority_queue<int> arr;
    int N = 0, data = 0, size = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data;
        if(data != 0){
            arr.push(data);
            size += 1;
        }
        else if(data == 0 && size == 0){
            cout << 0 << endl;
        }
        else{
            size -= 1;
            cout << arr.top() << endl;
            arr.pop();
        }
    }
    
    
    
    return 0;
}
