#include <iostream>
#include <vector>

using namespace std;

int arr[14];
int k;
vector<int> arr2;

void dfs(int idx){
    if(arr2.size() == 6){
        for(auto it : arr2){
            cout << it << " ";
        }
        cout << "\n";
        return ;
    }
    for(int i=idx+1;i<k;i++){
        arr2.push_back(arr[i]);
        dfs(i);
        arr2.pop_back();
    }
    
}

int main() {
    
    while(1){
        
        cin >> k;
        
        for(int i=0;i<14;i++){
            arr[i] = 0;
        }
        if(k == 0){
            break;
        }
        for(int i=0;i<k;i++){
            cin >> arr[i];
        }
        
        dfs(-1);
        
        cout << "\n";
        arr2.clear();
    }
    
    return 0;
}
