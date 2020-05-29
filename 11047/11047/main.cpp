#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    int N = 0, K = 0, data = 0, count = 0;
    deque<int> arr;
    
    cin >> N >> K;
    
    for(int i=0;i<N;i++){
        cin >> data;
        arr.push_front(data);
    }
    
    for(int i=0;i<N;i++){
        
        count += K / arr[i];
        K %= arr[i];
        //cout << K << endl;
    }
    
    cout << count << "\n";
    
    return 0;
}
