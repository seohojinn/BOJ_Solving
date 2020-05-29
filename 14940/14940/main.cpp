#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int map[1000][1000] = {0,};
    int n = 0, m = 0, first = 0, second = 0;
    queue<Pair> arr;

    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
            if(map[i][j] == 2){
                arr.push({i,j});
                map[i][j] = 0;
            }
            else if(map[i][j] == 1){
                map[i][j] = INT_MAX;
            }
        }
    }
    

    
    while(!arr.empty()){
        
        first = arr.front().first;
        second = arr.front().second;
        
        if(first != 0 && map[first-1][second] != 0 && map[first][second] + 1 < map[first-1][second]){
            map[first-1][second] = map[first][second] + 1;
            arr.push({first-1,second});
        }
        if(first != n-1 && map[first+1][second] != 0 && map[first][second] + 1 < map[first+1][second]){
            map[first+1][second] = map[first][second] + 1;
            arr.push({first+1,second});
        }
        if(second != 0 && map[first][second-1] != 0 && map[first][second] + 1 < map[first][second-1]){
            map[first][second-1] = map[first][second] + 1;
            arr.push({first,second-1});
        }
        if(second != m-1 && map[first][second+1] != 0 && map[first][second] + 1 < map[first][second+1]){
            map[first][second+1] = map[first][second] + 1;
            arr.push({first,second+1});
        }
        
        arr.pop();
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j] == INT_MAX){
                cout << -1 << " ";
            }
            else{
                cout << map[i][j] << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
