#include <iostream>

using namespace std;

int arr[15][15];
int N, value;

bool check(int depth, int idx){
    
    int tmp_depth = 0, tmp_idx = 0;
    
    for(int i=depth;i>=0;i--){
        if(arr[i][idx] == 1){
            return true;
        }
    }
    tmp_depth = depth;
    tmp_idx = idx - 1;
    
    while(1){
        if(tmp_depth == -1 || tmp_idx == -1){
            break;
        }
        if(arr[tmp_depth][tmp_idx] == 1){
            return true;
        }
        tmp_depth -= 1;
        tmp_idx -= 1;
    }
    
    tmp_depth = depth;
    tmp_idx = idx + 1;
    
    while(1){
        if(tmp_depth == -1 || tmp_idx == N){
            break;
        }
        if(arr[tmp_depth][tmp_idx] == 1){
            return true;
        }
        tmp_depth -= 1;
        tmp_idx += 1;
    }
    
    return false;
}

void dfs(int depth, int idx){
    
    if(depth != 0 && depth != 1 && check(depth-2,idx)){
        return ;
    }
    if(depth == N){
        value += 1;
        return ;
    }
    for(int i=0;i<N;i++){
        arr[depth][i] = 1;
        dfs(depth+1,i);
        arr[depth][i] = 0;
    }
    
}

int main() {
    
    cin >> N;

    dfs(0,0);
    
    cout << value << "\n";
    
    return 0;
}
