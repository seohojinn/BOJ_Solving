#include <iostream>
#include <queue>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

int main() {
    
    int arr[100][100] = {0,};
    int N = 0, M = 0,front = 0, second = 0, count = 0, value = 0;
    queue<Pair> searcher;
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    
    searcher.push({0,0});
    
    while(!searcher.empty()){
        front = searcher.front().first;
        second = searcher.front().second;
        
        if(front != 0 && arr[front-1][second] == 0){
            arr[front-1][second] = 2;
            searcher.push({front-1,second});
        }
        if(front != N-1 && arr[front+1][second] == 0){
            arr[front+1][second] = 2;
            searcher.push({front+1,second});
        }
        if(second != 0 && arr[front][second-1] == 0){
            arr[front][second-1] = 2;
            searcher.push({front,second-1});
        }
        if(second != M-1 && arr[front][second+1] == 0){
            arr[front][second+1] = 2;
            searcher.push({front,second+1});
        }
        searcher.pop();
    }
    
    while(1){
        
        for(int i=1;i<N-1;i++){
            for(int j=1;j<M-1;j++){
                if(arr[i][j] == 1){
                    count = 0;
                    if(arr[i+1][j] == 2){
                        count += 1;
                    }
                    if(arr[i-1][j] == 2){
                        count += 1;
                    }
                    if(arr[i][j-1] == 2){
                        count += 1;
                    }
                    if(arr[i][j+1] == 2){
                        count += 1;
                    }
                    if(count > 1){
                        arr[i][j] = 3;
                        searcher.push({i,j});
                    }
                }
            }
        }
        if(searcher.empty()){
            break;
        }
        
        while(!searcher.empty()){
            front = searcher.front().first;
            second = searcher.front().second;
            
            if(front != 0 && arr[front-1][second] == 0){
                arr[front-1][second] = 2;
                searcher.push({front-1,second});
            }
            if(front != N-1 && arr[front+1][second] == 0){
                arr[front+1][second] = 2;
                searcher.push({front+1,second});
            }
            if(second != 0 && arr[front][second-1] == 0){
                arr[front][second-1] = 2;
                searcher.push({front,second-1});
            }
            if(second != M-1 && arr[front][second+1] == 0){
                arr[front][second+1] = 2;
                searcher.push({front,second+1});
            }
            searcher.pop();
        }
        
        //cout << "===============" << endl;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(arr[i][j] == 3){
                    arr[i][j] = 2;
                }
            }
        }
        value += 1;
//        for(int i=0;i<N;i++){
//            for(int j=0;j<M;j++){
//                cout << arr[i][j] << " ";
//            }
//            cout << endl;
//        }
    }
    
    cout << value << "\n";
    
    return 0;
}
