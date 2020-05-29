#include <iostream>
#include <deque>
using namespace std;

int main() {
    
    int arr[201] = {0,};
    deque<int> data;
    int N = 0, count = 0, value = 0, back = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> value;
        data.push_back(value);
    }
    
    for(int i=0;i<N;i++){
        back = data.front();
        arr[back] = 1;
        for(int j=back+1;j<=N;j++){
            if(arr[j] == 1){
                arr[j] = 0;
                count += 1;
                break;
            }
        }
        data.pop_front();
    }
    
    cout << count << endl;
    
    return 0;
}
