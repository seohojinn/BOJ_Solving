#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[1000000] = {0,};
    int N = 0, count = 0;
    vector<int> value;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    value.push_back(INT_MIN);
    
    for(int i=0;i<N;i++){
        if(value.back() < arr[i]){
            value.push_back(arr[i]);
            count += 1;
        }
        else{
            auto it = lower_bound(value.begin(),value.end(),arr[i]);
            *it = arr[i];
        }
        
    }
    
    cout << value.size() - 1<< endl;
    
    
    return 0;
}
