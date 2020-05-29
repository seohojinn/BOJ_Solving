#include <iostream>
#include <deque>
#include <utility>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    int arr[101][101] = {0,};
    int N = 0, M = 0, count = 0, count2 = 0, first = 0, second = 0, time = 0, tmp = 0;
    deque<Pair> data;
    
    cin >> N >> M;
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> arr[i][j];
        }
    }
    
    while(1){
        data.clear();
        data.push_back({1,1});
        
        tmp = count2;
        count -= 1;
        count2 = 0;
        while(!data.empty()){
            first = data.front().first;
            second = data.front().second;
            
            if(first != 0 && arr[first-1][second] != count){
                if(arr[first-1][second] == 1){
                    count2 += 1;
                }
                else{
                    data.push_back({first-1,second});
                }
                arr[first-1][second] = count;
            }
            if(first != N && arr[first+1][second] != count){
                if(arr[first+1][second] == 1){
                    count2 += 1;
                }
                else{
                    data.push_back({first+1,second});
                }
                arr[first+1][second] = count;
            }
            if(second != 0 && arr[first][second-1] != count){
                if(arr[first][second-1] == 1){
                    count2 += 1;
                }
                else{
                    data.push_back({first,second-1});
                }
                arr[first][second-1] = count;
            }
            if(second != M && arr[first][second+1] != count){
                if(arr[first][second+1] == 1){
                    count2 += 1;
                }
                else{
                    data.push_back({first,second+1});
                }
                arr[first][second+1] = count;
            }
            data.pop_front();
        }
        
        
        if(count2 == 0){
            break;
        }
        time += 1;
    }
    
    cout << time << "\n" << tmp << "\n";
    
    return 0;
}
