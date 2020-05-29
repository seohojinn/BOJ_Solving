#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int count = 0, N = 0, M = 0;
    int S = 0, Y = 0;
    vector<vector<int>> arr;
    vector<vector<int>> arr2;
    
    cin >> N >> M;
    
    arr.resize(6);
    arr2.resize(6);
    
    for(int i=0;i<N;i++){
        cin >> S >> Y;
        if(S == 0){
            arr[Y-1].push_back(1);
        }
        else if(S == 1){
            arr2[Y-1].push_back(1);
        }
    }
    for(int i=0;i<6;i++){
        count += arr[i].size() / M;
        if(arr[i].size() % M != 0){
            count += 1;
        }
        count += arr2[i].size() / M;
        if(arr2[i].size() % M != 0){
            count += 1;
        }

    }
    
    cout << count << endl;
    
    
    return 0;
}
