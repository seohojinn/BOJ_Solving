#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    
    int N = 0;
    int A[1000000] = {0,};
    vector<int> arr;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    arr.push_back(-1);
    
    for(int i=0;i<N;i++){
        if(arr.back() < A[i]){
            arr.push_back(A[i]);
        }
        else{
            auto it = lower_bound(arr.begin(),arr.end(),A[i]);
            *it = A[i];
        }
    }
    
    cout << arr.size() - 1 << "\n";
    
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}
