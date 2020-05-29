#include <iostream>
#include <utility>
#include <queue>

using namespace std;

typedef pair<int,int> Pair;

char map[250][251];
int R, C, v_count, k_count;
int front_first, front_second;

void bfs(int data, int data2){
    queue<Pair> arr;
    arr.push({data,data2});
    
    if(map[data][data2] == 'v'){
        v_count += 1;
    }
    else if(map[data][data2] == 'k'){
        k_count += 1;
    }
    map[data][data2] = '#';
    
    while(!arr.empty()){
        front_first = arr.front().first;
        front_second = arr.front().second;
        if(front_first != 0 && map[front_first-1][front_second] != '#'){
            if(map[front_first-1][front_second] == 'v'){
                v_count += 1;
            }
            else if(map[front_first-1][front_second] == 'k'){
                k_count += 1;
            }
            map[front_first-1][front_second] = '#';
            arr.push({front_first-1,front_second});
        }
        if(front_first != R-1 && map[front_first+1][front_second] != '#'){
            if(map[front_first+1][front_second] == 'v'){
                v_count += 1;
            }
            else if(map[front_first+1][front_second] == 'k'){
                k_count += 1;
            }
            map[front_first+1][front_second] = '#';
            arr.push({front_first+1,front_second});
        }
        if(front_second != 0 && map[front_first][front_second-1] != '#'){
            if(map[front_first][front_second-1] == 'v'){
                v_count += 1;
            }
            else if(map[front_first][front_second-1] == 'k'){
                k_count += 1;
            }
            map[front_first][front_second-1] = '#';
            arr.push({front_first,front_second-1});
        }
        if(front_second != C-1 && map[front_first][front_second+1] != '#'){
            if(map[front_first][front_second+1] == 'v'){
                v_count += 1;
            }
            else if(map[front_first][front_second+1] == 'k'){
                k_count += 1;
            }
            map[front_first][front_second+1] = '#';
            arr.push({front_first,front_second+1});
        }
        arr.pop();
    }
    
}

int main() {
    
    ios::sync_with_stdio(false);
    
    int v_value = 0, k_value = 0;
    
    cin >> R >> C;
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> map[i][j];
        }
    }
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(map[i][j] != '#'){
                bfs(i,j);
                if(k_count > v_count){
                    k_value += k_count;
                }
                else{
                    v_value += v_count;
                }
                k_count = 0;
                v_count = 0;
            }
        }
    }
    
    cout << k_value << " " << v_value << "\n";
    
    
    return 0;
}
