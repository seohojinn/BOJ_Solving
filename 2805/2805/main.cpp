#include <iostream>
using namespace std;

int main() {
    
    int N = 0, M = 0;
    long long age = 0, max_height = -1, data = 0;
    long long arr[1000000] = {0,};
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
        age += arr[i];
        if(arr[i] > max_height){
            max_height = arr[i];
        }
    }
    
    age /= N;
    
    while(1){
        data = 0;
        for(int i=0;i<N;i++){
            if(arr[i] > age){
                data += arr[i] - age;
            }
        }
        if(data == M){
            break;
        }
        else if(data > M){
            age = (max_height + age) / 2;
        }
        else if(data < M){
            age /= 2;
        }
        
    }
    
    cout << age << endl;
    
    return 0;
}
