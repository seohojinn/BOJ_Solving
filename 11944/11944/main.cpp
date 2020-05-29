#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    
    int N = 0, M = 0, value = 0;
    int size = 0, count = 0;
    vector<int> data;
    vector<int> data2;
    
    cin >> N >> M;
    
    value = N;
    
    while(value != 0){
        data.push_back(value%10);
        value /= 10;
    }
    
    size = int(data.size());
    
    for(int i=0;i<N;i++){
        for(int j=size-1;j>=0;j--){
            if(count > M){
                for(int k=0;k<M;k++){
                    cout << data2[k];
                }
                cout << endl;
                return 0;
            }
            data2.push_back(data[j]);
            count += 1;
        }
    }
    
    for(int i=0;i<count;i++){
        cout << data2[i];
    }
    cout << endl;
    
    return 0;
}
