#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<long long> arr;
    int N = 0;
    long long idx = 1;
    
    cin >> N;
    
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    
    if(N == 1){
        cout << 4 << endl;
    }
    else if(N == 2){
        cout << 6 << endl;
    }
    else if(N == 3){
        cout << 10 << endl;
    }
    else{
        for(int i=3;i<N;i++){
            arr.push_back(arr[idx] + arr.back());
            idx += 1;
        }
        cout << (arr.back() * 2) + ((arr.back() + arr[idx]) * 2) << endl;
    }
    
    
    return 0;
}
