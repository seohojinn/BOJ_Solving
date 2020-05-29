#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> arr;
    int N = 0, data = 0, sum = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data;
        arr.push_back(data);
    }
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            sum += arr[j];
        }
    }
 
    cout << sum << "\n";
    
    return 0;
}
