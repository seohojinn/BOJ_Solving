#include <iostream>
#include <deque>

using namespace std;

deque<deque<int> > arr;
int N, M;

int bfs(int arg1, int arg2){

    deque<int> searcher;
    deque<int> data(N);
    int front = 0, size = 0;
    
    searcher.push_back(arg1);
    
    while(!searcher.empty()){
        front = searcher.front();
        size = int(arr[front].size());
        data[front] = 1;
        for(int i=0;i<size;i++){
            if((front != arg1 || i != arg2) && data[arr[front][i]] == 0){
                searcher.push_back(arr[front][i]);
            }
        }
        searcher.pop_front();
    }
    for(int i=0;i<N;i++){
        if(data[i] == 0){
            cout << "====" << endl;
            cout << arg1 << " " << arg2 << endl;
            for(auto it : data){
                cout << it << " ";
            }
            cout << endl;
            cout << "====" << endl;
            return 1;
        }
    }
    return 0;
}

int main() {
    
    int C1 = 0, C2 = 0;
    int size = 0;
    deque<int> value;
    
    cin >> N >> M;
    
    arr.resize(N);
    
    for(int i=0;i<M;i++){
        cin >> C1 >> C2;
        arr[C1-1].push_back(C2-1);
        arr[C2-1].push_back(C1-1);
    }
    
    cout << "=====================" << endl;
    for(int i=0;i<N;i++){
        for(auto it : arr[i]){
            cout << it+1 << " ";
        }
        cout << endl;
    }
    cout << "=====================" << endl;
    
    for(int i=0;i<N;i++){
        size = int(arr[i].size());
        for(int j=0;j<size;j++){
            if(bfs(i,j) == 1){
                value.push_back(i+1);
            }
        }
    }
    
    for(auto it : value){
        cout << it << " ";
    }
    
    cout << endl;
       
    return 0;
}
