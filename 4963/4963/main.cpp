#include <iostream>
#include <utility>
#include <queue>

using namespace std;
typedef pair<int,int> Pair;

int w, h;
int map[50][50];

void bfs(int i,int j){
    queue<Pair> location;
    
    location.push({i,j});
    map[i][j] = 0;
    
    while(!location.empty()){
        i = location.front().first;
        j = location.front().second;
        if(i != 0 && map[i-1][j] == 1){
            location.push({i-1,j});
            map[i-1][j] = 0;
        }
        if(i != h-1 && map[i+1][j] == 1){
            location.push({i+1,j});
            map[i+1][j] = 0;
        }
        if(j != 0 && map[i][j-1] == 1){
            location.push({i,j-1});
            map[i][j-1] = 0;
        }
        if(j != w-1 && map[i][j+1] == 1){
            location.push({i,j+1});
            map[i][j+1] = 0;
        }
        if(i != 0 && j != 0 && map[i-1][j-1] == 1){
            location.push({i-1,j-1});
            map[i-1][j-1] = 0;
        }
        if(i != 0 && j != w-1 && map[i-1][j+1] == 1){
            location.push({i-1,j+1});
            map[i-1][j+1] = 0;
        }
        if(i != h-1 && j != 0 && map[i+1][j-1] == 1){
            location.push({i+1,j-1});
            map[i+1][j-1] = 0;
        }
        if(i != h-1 && j != w-1 && map[i+1][j+1] == 1){
            location.push({i+1,j+1});
            map[i+1][j+1] = 0;
        }
        
        location.pop();
    }
 
}

int main() {
    
    int count = 0;
    
    while(1){
        cin >> w >> h;
        count = 0;
        if(w == 0 && h == 0){
            break;
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin >> map[i][j];
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(map[i][j] == 1){
                    bfs(i,j);
                    count += 1;
                }
            }
        }
        cout << count << endl;
    }
    
    
    
    return 0;
}
