#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int> > arr;

int bfs(int idx){
    
    queue<int> data;
    bool check[10000] = {0,};
    int count = 0, front = 0, size = 0;
    
    data.push(idx);
    check[idx] = true;
    
    while(!data.empty()){
    
        size = int(data.size());
        count += size;
        
        for(int i=0;i<size;i++){
            front = data.front();
            
            for(auto it : arr[front]){
                if(check[it] == false){
                    check[it] = true;
                    data.push(it);
                }
            }
            data.pop();
        }
        
    }

    return count;
    
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> value(10000,-1);
    int N = 0, M = 0, data = 0, data2 = 0, max_depth = 0;
    
    cin >> N >> M;
    
    arr.resize(N);
    
    for(int i=0;i<M;i++){
        cin >> data >> data2;
        arr[data2-1].push_back(data-1);
    }
    
    for(int i=0;i<N;i++){
        
        value[i] = bfs(i);
        max_depth = max(max_depth,value[i]);
        
    }
    
    for(int i=0;i<N;i++){
        if(value[i] == max_depth){
            cout << i+1 << " ";
        }
    }
    cout << "\n";
    
    return 0;
}
