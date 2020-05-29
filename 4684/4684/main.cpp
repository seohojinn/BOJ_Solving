#include <iostream>
#include <utility>
#include <deque>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0, right = 0, right2 = 0, idx = 0, data = 0, tmp = 0;
    pair<int,int> change = {-1,-1};
    deque<int> arr;
    deque<int> tmp_arr;
 
    
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> data;
        arr.push_back(data);
    }
    
    while(1){
        
        if(change.first != -1 && change.second != -1){
            break;
        }
        
        tmp = arr[N-1];
        
        for(int i=0;i<N;i++){
            if(change.first == -1 && tmp + 1 != arr[i]){
                change.first = i;
            }
            else if(change.first != -1 && change.second == -1 && tmp + 1 == arr[i]){
                change.second = i - 2;
                if(change.second == -1){
                    change.second = N - 1;
                }
            }
            tmp = arr[i];
        }
        arr.push_front(arr.back());
        arr.pop_back();
        right += 1;
        
    }
    
    
    for(int i=0;i<N;i++){
        if(arr[i] == N){
            idx = i;
            break;
        }
    }
    
    right2 = N - idx - 1;
    if(right == 0){
        right += 1;
        right2 -= 1;
    }
    
    cout << right << "\n";
    cout << change.first + right << " " << change.second + right << "\n";
    cout << right2 << "\n";
    
    return 0;

}
