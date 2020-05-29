#include <iostream>
#include <utility>
#include <queue>

using namespace std;

typedef pair<int,int> Pair;

char map[50][51];
int R, C, counter, arr_size;
int front_first, front_second;
queue<Pair> arr;

int main() {
    
    ios::sync_with_stdio(false);
    
    cin >> R >> C;
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> map[i][j];
            if(map[i][j] == 'S'){
                arr.push({i,j});
            }
        }
    }
    
    while(!arr.empty()){
        
        counter += 1;
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(map[i][j] == '*'){
                    if(i != 0 && map[i-1][j] != 'D' && map[i-1][j] != 'X' && map[i-1][j] != '*'){
                        map[i-1][j] = '$';
                    }
                    if(i != R-1 && map[i+1][j] != 'D' && map[i+1][j] != 'X' && map[i+1][j] != '*'){
                        map[i+1][j] = '$';
                    }
                    if(j != 0 && map[i][j-1] != 'D' && map[i][j-1] != 'X' && map[i][j-1] != '*'){
                        map[i][j-1] = '$';
                    }
                    if(j != C-1 && map[i][j+1] != 'D' && map[i][j+1] != 'X' && map[i][j+1] != '*'){
                        map[i][j+1] = '$';
                    }
                }
            }
        }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(map[i][j] == '$'){
                    map[i][j] = '*';
                }
            }
        }
        
        arr_size = int(arr.size());
        for(int i=0;i<arr_size;i++){
            front_first = arr.front().first;
            front_second = arr.front().second;
            if(front_first != 0 && map[front_first-1][front_second] != '*' && map[front_first-1][front_second] != 'X' && map[front_first-1][front_second] != 'z'){
                if(map[front_first-1][front_second] == 'D'){
                    cout << counter << "\n";
                    return 0;
                }
                map[front_first-1][front_second] = 'z';
                arr.push({front_first-1,front_second});
            }
            if(front_first != R-1 && map[front_first+1][front_second] != '*' && map[front_first+1][front_second] != 'X' && map[front_first+1][front_second] != 'z'){
                if(map[front_first+1][front_second] == 'D'){
                    cout << counter << "\n";
                    return 0;
                }
                map[front_first+1][front_second] = 'z';
                arr.push({front_first+1,front_second});
            }
            if(front_second != 0 && map[front_first][front_second-1] != '*' && map[front_first][front_second-1] != 'X' && map[front_first][front_second-1] != 'z'){
                if(map[front_first][front_second-1] == 'D'){
                    cout << counter << "\n";
                    return 0;
                }
                map[front_first][front_second-1] = 'z';
                arr.push({front_first,front_second-1});
            }
            if(front_second != C-1 && map[front_first][front_second+1] != '*' && map[front_first][front_second+1] != 'X' && map[front_first][front_second+1] != 'z'){
                if(map[front_first][front_second+1] == 'D'){
                    cout << counter << "\n";
                    return 0;
                }
                map[front_first][front_second+1] = 'z';
                arr.push({front_first,front_second+1});
            }
            arr.pop();
        }
        
    }
    
    cout << "KAKTUS" << "\n";
    
    return 0;
}
