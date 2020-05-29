#include <iostream>
#include <climits>
#include <queue>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

int main() {
    
    char map[100][101] = {0,};
    int value[100][100] = {0,};
    int f = 0, s = 0;
    queue<Pair> arr;
    int N = 0, M = 0;
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
            value[i][j] = INT_MAX;
        }
    }
    
    value[0][0] = 1;
    arr.push({0,0});
    
    while(!arr.empty()){
        f = arr.front().first;
        s = arr.front().second;
        if(f != 0 && map[f-1][s] == '1' && value[f][s] + 1 < value[f-1][s]){
            value[f-1][s] = value[f][s] + 1;
            arr.push({f-1,s});
        }
        if(f != N-1 && map[f+1][s] == '1' && value[f][s] + 1 < value[f+1][s]){
            value[f+1][s] = value[f][s] + 1;
            arr.push({f+1,s});
        }
        
        if(s != 0 && map[f][s-1] == '1' && value[f][s] + 1 < value[f][s-1]){
            value[f][s-1] = value[f][s] + 1;
            arr.push({f,s-1});
        }
        if(s != M-1 && map[f][s+1] == '1' && value[f][s] + 1 < value[f][s+1]){
            value[f][s+1] = value[f][s] + 1;
            arr.push({f,s+1});
        }
//        cout << "=============================" << endl;
//        for(int i=0;i<N;i++){
//            for(int j=0;j<M;j++){
//                if(value[i][j] == INT_MAX){
//                    cout << "o" << " ";
//                }
//                else{
//                    cout << value[i][j] << " ";
//                }
//            }
//            cout << endl;
//        }
//        cout << "=============================" << endl;
        arr.pop();
    }
    
    cout << value[N-1][M-1] << endl;

    
    return 0;
}
