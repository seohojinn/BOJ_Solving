#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr;
    int N = 0, K = 0, count = 0, front = 0, front_data = 0, idx = 0;
    int size = 0;
    
    cin >> N >> K;
    
    for(int i=1;i<N;i++){
        arr.push_back(i+1);
    }
    
    size = int(arr.size());
    
    while(1){
        front_data = arr[front];
        idx = front;
        
        while(idx <= size){
            if(arr[idx] != 0){
                count += 1;
                if(count == K){
                    cout << arr[idx] << endl;
                    return 0;
                }
            }
            arr[idx] = 0;
            idx += front_data;
        }
        do{
            front += 1;
        }while(arr[front] == 0);
    }
    
    
    return 0;
}
