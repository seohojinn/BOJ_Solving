#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int N = 0, I = 0, count = 0, value = 0;
    int size = 0;
    vector<int> data, arr;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> value;
        data.push_back(value);
        arr.push_back(0);
    }
    
    while(count != N){
        I += 1;
        for(int i=0;i<size;i++){
            if(arr[i] != -1){
                arr[i] += 1;
            }
            if(arr[i] == data[i]){
                arr[i] = -1;
                count += 1;
            }
        }
        if(size <= N){
            size += 1;
        }
    }

    cout << I << endl;
    
    return 0;
}
