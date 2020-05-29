#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    
    int N = 0, K = 0, idx = 0, offset = 0, sum = 0;
    int max = INT_MIN;
    int arr[100000] = {0,};
    vector<int> value;
    
    cin >> N >> K;
    
    offset = K - 1;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
        if(i < K){
            sum += arr[i];
        }
    }

    
    while(1){
        if(sum > max){
            max = sum;
        }
        
        idx += 1;
        offset += 1;
        if(offset > N-1){
            break;
        }
        sum -= arr[idx-1];
        sum += arr[offset];

    }
    
    cout << max << endl;
    
    
    return 0;
}
