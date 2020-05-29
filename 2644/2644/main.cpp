#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n = 0, value = 0, value2 = 0, m = 0, x = 0, y = 0, front = 0;
    vector<vector<int> > arr;
    queue<int> bfs;
    int data[100];
    
    cin >> n;
    cin >> value >> value2;
    cin >> m;
    
    arr.resize(n);
    
    for(int i=0;i<n;i++){
        data[i] = INT_MAX;
    }
    data[value-1] = 0;
    
    for(int i=0;i<m;i++){
        cin >> x >> y;
        arr[x-1].push_back(y-1);
        arr[y-1].push_back(x-1);
    }
    
    bfs.push(value-1);
    
    while(!bfs.empty()){
        front = bfs.front();
        for(auto it : arr[front]){
            if(data[it] > data[front] + 1){
                data[it] = data[front] + 1;
                bfs.push(it);
            }
        }
        bfs.pop();
    }
    
    if(data[value2-1] == INT_MAX){
        cout << -1 << "\n";
    }
    else{
        cout << data[value2-1] << "\n";
    }
    
//    for(int i=0;i<n;i++){
//        cout << data[i] << " ";
//    }
//    cout << endl;
    
    return 0;
}
