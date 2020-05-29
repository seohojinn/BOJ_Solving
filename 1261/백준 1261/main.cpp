#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int,pair<int,int> > Pair;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int M = 0, N = 0, cost = 0, first = 0, second = 0;
    char map[100][101] = {0,};
    int d[100][100] = {0,};
    priority_queue<Pair> arr;
    
    cin >> M >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
            d[i][j] = INT_MAX;
        }
    }
    
    arr.push({0,{0,0}});
    d[0][0] = 0;
    
    while(!arr.empty()){
        
        //cout << "=================" << endl;

        cost = -arr.top().first;
        first = arr.top().second.first;
        second = arr.top().second.second;
        
        //cout << cost << " " << first << " " << second << endl;
        arr.pop();
        
        if(first != 0){
            if(map[first-1][second] == '1' && cost + 1 < d[first-1][second]){
                arr.push({-(cost+1),{first-1,second}});
                d[first-1][second] = cost + 1;
                //cout << 'a' << endl;
            }
            else if(map[first-1][second] != '1' && cost < d[first-1][second]){
                arr.push({-cost,{first-1,second}});
                d[first-1][second] = cost;
                //cout << 'b' << endl;

            }
        }
        if(first != N-1){
            if(map[first+1][second] == '1' && cost + 1 < d[first+1][second]){
                arr.push({-(cost+1),{first+1,second}});
                d[first+1][second] = cost + 1;
                //cout << 'c' << endl;
            }
            else if(map[first+1][second] != '1' && cost < d[first+1][second]){
                arr.push({-cost,{first+1,second}});
                d[first+1][second] = cost;
                //cout << 'd' << endl;
            }
        }
        if(second != 0){
            if(map[first][second-1] == '1' && cost + 1 < d[first][second-1]){
                arr.push({-(cost+1),{first,second-1}});
                d[first][second-1] = cost + 1;
                //cout << 'e' << endl;
            }
            else if(map[first][second-1] != '1' && cost < d[first][second-1]){
                arr.push({-cost,{first,second-1}});
                d[first][second-1] = cost;
                //cout << 'f' << endl;
            }
        }
        if(second != M-1){
            if(map[first][second+1] == '1' && cost + 1 < d[first][second+1]){
                arr.push({-(cost+1),{first,second+1}});
                d[first][second+1] = cost + 1;
                //cout << 'g' << endl;
            }
            else if(map[first][second+1] != '1' && cost < d[first][second+1]){
                arr.push({-cost,{first,second+1}});
                d[first][second+1] = cost;
                //cout << 'h' << endl;
            }
        }
        
//        for(int i=0;i<N;i++){
//            for(int j=0;j<M;j++){
//                if(d[i][j] == INT_MAX){
//                    cout << "? ";
//                }
//                else{
//                    cout << d[i][j] << " ";
//                }
//            }
//            cout << endl;
//        }
    }
    
    cout << d[N-1][M-1] << "\n";
    
    return 0;
}
