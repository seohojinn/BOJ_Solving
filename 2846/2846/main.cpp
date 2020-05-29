#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    
    vector<int> arr;
    int N = 0, max = 0, data = 0;
    int begin = -1;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data;
        arr.push_back(data);
    }
    
    for(int i=1;i<N;i++){
        if(arr[i-1] < arr[i] && begin == -1){
            begin = i - 1;
        }
        else if(arr[i-1] >= arr[i] && begin != -1){
            if(max < arr[i-1] - arr[begin]){
                max = arr[i-1] - arr[begin];
            }
            begin = -1;
        }
    }
    
    if(begin != -1 && max < arr[N-1] - arr[begin]){
        max = arr[N-1] - arr[begin];
    }
    
    cout << max << "\n";
    
    return 0;
}
