#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    
    int T = 0, N = 0, M = 0,input = 0, front = 0;
    deque<int> data;
    int arr[10001] = {0,};

    cin >> T;

    for(int i=0;i<T;i++){

        cin >> N;

        arr[0] = 1;
        for(int j=0;j<N;j++){
            cin >> input;
            data.push_back(input);
        }
        
        cin >> M;
        
        front = data.front();
        data.pop_front();
        
        for(int j=front;j<=M;j+=front){
            arr[j] = 1;
        }
        
        for(auto it : data){

            for(int j=it;j<=M;j++){
                arr[j] += arr[j-it];
            }
            
        }
        
        cout << arr[M] << "\n";
        
        data.clear();
        for(int j=0;j<=M;j++){
            arr[j] = 0;
        }
    }

    return 0;
}
