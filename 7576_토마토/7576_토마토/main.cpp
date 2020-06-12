#include <iostream>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    int M = 0, N = 0, count = -1, first = 0, second = 0, size = 0;
    int map[1000][1000];
    queue<Pair> bfs;
    
    cin >> M >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
            if(map[i][j] == 1){
                bfs.push({i,j});
            }
        }
    }
    
    while(!bfs.empty()){
        
        size = int(bfs.size());
        
        for(int i=0;i<size;i++){
            
            first = bfs.front().first;
            second = bfs.front().second;
            
            if(first != 0 && map[first-1][second] == 0){
                map[first-1][second] = 1;
                bfs.push({first-1,second});
            }
            
            if(first != N-1 && map[first+1][second] == 0){
                map[first+1][second] = 1;
                bfs.push({first+1,second});
            }
            
            if(second != 0 && map[first][second-1] == 0){
                map[first][second-1] = 1;
                bfs.push({first,second-1});
            }
            
            if(second != M-1 && map[first][second+1] == 0){
                map[first][second+1] = 1;
                bfs.push({first,second+1});
            }
            
            bfs.pop();
        }
        
        count += 1;
        
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(map[i][j] == 0){
                cout << -1 << "\n";
                return 0;
            }
        }
    }
    
    cout << count << "\n";
    
    return 0;
}
