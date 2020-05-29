#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    int min = INT_MAX, sum = 0;
    int M = 0, N = 0, idx = 0;
    int arr[10001] = {0,};
    
    cin >> M >> N;
    
    for(int i=2;i<=N;i++){
        arr[i] = 1;
    }
    
    for(int i=2;i<=N;i++){
        if(arr[i] == INT_MAX){
            continue;
        }
        idx = i * 2;
        while(idx <= N){
            arr[idx] = INT_MAX;
            idx += i;
        }
    }
    arr[1] = INT_MAX;
    for(int i=M;i<=N;i++){
        if(arr[i] != INT_MAX){
            sum += i;
            if(i < min){
                min = i;
            }
        }
    }
    
    
    if(sum == 0){
        cout << -1 << "\n";
    }
    else{
        cout << sum << "\n" << min << "\n";
    }
    
    
    return 0;
}
