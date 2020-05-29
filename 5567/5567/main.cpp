#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > arr;
int data[500];
int counter;

void dfs(int value,int depth){
    
    int size = 0;
    
    size = int(arr[value].size());

    for(int i=0;i<size;i++){
       
        if(data[arr[value][i]] == 0 && depth + 1 == 2){
            counter += 1;
            data[arr[value][i]] = 1;
        }
        else if((data[arr[value][i]] == 0 || data[arr[value][i]] == 1) && depth + 1 != 2){
            if(data[arr[value][i]] == 0){
                counter += 1;
            }
            data[arr[value][i]] = 2;
            dfs(arr[value][i], depth + 1);
        }
        
    }
}

int main() {
    
    ios::sync_with_stdio(false);
    
    int n = 0, m = 0, a = 0, b = 0;
    
    cin >> n >> m;
    
    arr.resize(n);
    
    for(int i=0;i<m;i++){
        cin >> a >> b;
        arr[a-1].push_back(b-1);
        arr[b-1].push_back(a-1);
    }
    
    data[0] = 2;

    dfs(0,0);
  
    
    cout << counter << "\n";
    
    
    return 0;
}
