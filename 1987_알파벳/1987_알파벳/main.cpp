#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

char arr[20][21];
int R, C, max_value = -1;
vector<char> stack;

bool check(int vertical, int horizontal){
    
    for(auto it : stack){
        if(it == arr[vertical][horizontal]){
            return false;
        }
    }
    return true;
}

void dfs(int vertical, int horizontal){
    
    if(vertical != 0 && check(vertical-1,horizontal)){
        stack.push_back(arr[vertical-1][horizontal]);
        dfs(vertical-1,horizontal);
    }
    
    if(vertical != R-1 && check(vertical+1,horizontal)){
        stack.push_back(arr[vertical+1][horizontal]);
        dfs(vertical+1,horizontal);
    }
    
    if(horizontal != 0 && check(vertical,horizontal-1)){
        stack.push_back(arr[vertical][horizontal-1]);
        dfs(vertical,horizontal-1);
    }
    
    if(horizontal != C-1 && check(vertical,horizontal+1)){
        stack.push_back(arr[vertical][horizontal+1]);
        dfs(vertical,horizontal+1);
    }
    
    max_value = max(max_value,int(stack.size()));
    stack.pop_back();
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> R >> C;
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[i][j];
        }
    }
    
    stack.push_back(arr[0][0]);
    dfs(0,0);
    
    cout << max_value << "\n";
    
    return 0;
}
