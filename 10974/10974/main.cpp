#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    vector<int> arr;
    int N = 0;
    
    cin >> N;
    
    for(int i=1;i<=N;i++){
        arr.push_back(i);
    }
    
    do{
        for(auto it : arr){
            cout << it << " ";
        }
        cout << "\n";
    }while(next_permutation(arr.begin(),arr.end()));
    
    
    
    return 0;
}
