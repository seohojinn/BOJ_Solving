#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    deque<int> arr;
    int T = 0, N = 0, M = 0, data = 0, count = 0, size = 0, tmp_value = 0, tmp = 0;
    int bit = 0;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        
        cin >> N >> M;
        count = 0;
        arr.clear();
        
        for(int j=0;j<N;j++){
            cin >> data;
            arr.push_back(data);
        }
        
        tmp_value = arr[M];
        
        while(1){
            
            size = int(arr.size());
            bit = 0;
            count += 1;
            
            if(size == 1){
                //cout << "\n";
                cout << count << "\n";
                break;
            }
            
            if(arr[0] == tmp_value && M == 0){
                size = int(arr.size());
                for(int j=1;j<size;j++){
                    if(arr[0] < arr[j]){
                        break;
                    }
                    else if(j == size - 1){
                        //cout << "\n";
                        cout << count << "\n";
                        bit = 1;
                    }
                }
                if(bit == 1){
                    break;
                }
            }
            
            for(int j=1;j<size;j++){
                
                tmp = 0;
                
                if(arr[0] < arr[j]){
                    arr.push_back(arr[0]);
                    arr.pop_front();
                    
                    M -= 1;
                    count -= 1;
                    
                    if(M == -1){
                        M = size - 1;
                    }
                    break;
                }
                else if(j == size - 1){
                    M -= 1;
                    if(M == -1){
                        M = size - 2;
                    }
                    tmp = arr.front();
                    arr.pop_front();
                }
            }
            
//            for(auto it : arr){
//                cout << it << " ";
//            }
//            cout << endl;
//
//            for(int i=0;i<arr.size();i++){
//                if(i == M){
//                    cout << "! ";
//                }
//                else{
//                    cout << "  ";
//                }
//            }
//            cout << endl;
        
        }
    }
    
    return 0;
}

