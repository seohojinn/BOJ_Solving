#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    
    pair<int,string> arr[20000];
    int N = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i].second;
        arr[i].first = int(arr[i].second.size());
    }
    
    sort(arr,arr+N);
    
    for(int i=0;i<N;i++){
        if(i == 0){
            cout << arr[i].second << endl;
        }
        else if(i != 0 && arr[i].second != arr[i-1].second){
            cout << arr[i].second << endl;
        }
    }
    
    
    
    return 0;
}
