#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    stack<int> arr;
    int N = 0, data = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data;
        arr.push(data);
    }
    
    while(!arr.empty()){
        cout << arr.top() << " ";
        arr.pop();
    }
    
    cout << "\n";
    
    return 0;
}
