#include <iostream>

using namespace std;

char map[11][11];
bool check[10][10];
int R, S, value;

void dfs(int y,int x){
    
    if(y == R-1 && x == S-1){
        value += 1;
        value = value % 10007;
        return ;
    }
    
    check[y][x] = 1;
    
    if(y != 0 && map[y-1][x] != '#' && check[y-1][x] == 0){
        dfs(y-1,x);
    }
    if(x != 0 && map[y][x-1] != '#' && check[y][x-1] == 0){
        dfs(y,x-1);
    }
    if(y != R-1 && map[y+1][x] != '#' && check[y+1][x] == 0){
        dfs(y+1,x);
    }
    if(x != S-1 && map[y][x+1] != '#' && check[y][x+1] == 0){
        dfs(y,x+1);
    }
    
}

int main() {
    
    cin >> R >> S;
    
    for(int i=0;i<R;i++){
        for(int j=0;j<S;j++){
            cin >> map[i][j];
        }
    }
    
    dfs(0,0);
    
    cout << value << endl;
    
    
    return 0;
}
