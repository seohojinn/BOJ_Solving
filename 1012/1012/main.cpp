#include <iostream>
#include <utility>
#include <queue>

using namespace std;

typedef pair<int,int> Pair;

bool arr[50][50];
int M, N;

void solve(int a, int b){
    queue<Pair> bfs;
    Pair front;
    
    arr[a][b] = 0;
    bfs.push({a,b});
    
    while(!bfs.empty()){
        front.first = bfs.front().first;
        front.second = bfs.front().second;
        if(front.first != 0 && arr[front.first-1][front.second] == 1){
            arr[front.first-1][front.second] = 0;
            bfs.push({front.first-1,front.second});
        }
        if(front.first != N-1 && arr[front.first+1][front.second] == 1){
            arr[front.first+1][front.second] = 0;
            bfs.push({front.first+1,front.second});
        }
        if(front.second != 0 && arr[front.first][front.second-1] == 1){
            arr[front.first][front.second-1] = 0;
            bfs.push({front.first,front.second-1});
        }
        if(front.second != M-1 && arr[front.first][front.second+1] == 1){
            arr[front.first][front.second+1] = 0;
            bfs.push({front.first,front.second+1});
        }
        bfs.pop();
    }

}

int main() {
    
    int T = 0, K = 0, count = 0;
    Pair location;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        count = 0;
        cin >> M >> N >> K;
        for(int j=0;j<K;j++){
            cin >> location.second >> location.first;
            arr[location.first][location.second] = 1;
        }

        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                if(arr[j][k] == 1){
                    solve(j,k);
                    count += 1;
                }
            }
        }
        cout << count << "\n";
    }
    
    return 0;
}
