#include <iostream>
#include <algorithm>
#include <deque>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

int arr[100][100];
int N, M, K;
int first, second;

int bfs(int y,int x){
    
    int count = 0;
    deque<Pair> data;
    data.push_back({y,x});
    arr[y][x] = 1;
    while(!data.empty()){
        first = data.front().first;
        second = data.front().second;
        count += 1;
        if(first != 0 && arr[first-1][second] == 0){
            data.push_back({first-1,second});
            arr[first-1][second] = 1;
        }
        if(first != N-1 && arr[first+1][second] == 0){
            data.push_back({first+1,second});
            arr[first+1][second] = 1;
        }
        if(second != 0 && arr[first][second-1] == 0){
            data.push_back({first,second-1});
            arr[first][second-1] = 1;
        }
        if(second != M-1 && arr[first][second+1] == 0){
            data.push_back({first,second+1});
            arr[first][second+1] = 1;
        }
        data.pop_front();
    }
    return count;
}

int main() {
    
    int a = 0, b = 0, c = 0, d = 0;
    
    deque<int> data;
    
    cin >> N >> M >> K;
    
    for(int i=0;i<K;i++){
        cin >> a >> b >> c >> d;
        for(int j=b;j<d;j++){
            for(int k=a;k<c;k++){
                arr[j][k] = 1;
            }
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j] == 0){
                data.push_back(bfs(i,j));
            }
        }
    }
    
    cout << data.size() << endl;
    
    sort(data.begin(),data.end());
    
    for(auto it : data){
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}
