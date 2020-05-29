#include <iostream>
#include <algorithm>
#include <string>
#include <utility>


using namespace std;
typedef pair<string,string> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    
    int value = 0, T = 0, N = 0, count = 1, idx = 0;
    Pair arr[30];
    int data[30] = {0,};
    
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> N;
        value = N;
        count = 1;
        idx = 0;
        for(int j=0;j<N;j++){
            cin >> arr[j].second >> arr[j].first;
        }
        sort(arr,arr+N);
        for(int j=0;j<N;j++){
            cout << arr[j].first << endl;
        }
        
        for(int j=1;j<N;j++){
            if(arr[j].first != arr[j-1].first){
                data[idx] = count;
                idx += 1;
                count = 1;
            }
            else{
                count += 1;
            }
        }
        data[idx] = count;
        idx += 1;
        cout << idx << endl;
        for(int j=0;j<idx;j++){
            for(int k=j+1;k<idx;k++){
                value += data[j] * data[k];
            }
        }
        
        cout << value << "\n";
    }
    
    
    return 0;
}

