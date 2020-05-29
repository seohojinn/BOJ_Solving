#include <iostream>
#include <utility>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int data[1000001];
    int M = 0, N = 0, idx = 0;
    
    cin >> M >> N;
    
    for(int i=M;i<=N;i++){
        data[i] = 1;
    }
    
    for(int i=2;i<=N;i++){
        idx = i * 2;
        while(idx <= N){
            data[idx] = 0;
            idx += i;
        }
    }
    
    data[1] = 0;
    
    for(int i=M;i<=N;i++){
        if(data[i] == 1){
            cout << i << "\n";
        }
    }
    

    return 0;
}
