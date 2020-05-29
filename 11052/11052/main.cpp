#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    int N = 0, data = 0;
    vector<vector<int> > arr;
    
    cin >> N;
    
    arr.resize(N+1);
    
    arr[0].push_back(0);
    
    for(int i=1;i<=N;i++){
        cin >> data;
        arr[i].push_back(data);
    }
    
    for(int i=2;i<=N;i++){
        for(int j=1;j<=i/2;j++){
            for(auto it : arr[i-j]){
                arr[i].push_back(it+arr[j][0]);
            }
        }
    }
    
    cout << *max_element(arr[N].begin(),arr[N].end()) << endl;
   
    return 0;
}
