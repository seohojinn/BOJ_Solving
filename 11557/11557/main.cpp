#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    
    pair<int,string> arr[100];
    int T = 0, N = 0;
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> N;
        for(int i=0;i<N;i++){
            cin >> arr[i].second >> arr[i].first;
        }
        sort(arr,arr+N);
        cout << arr[N-1].second << endl;
    }
    
    return 0;
}
