#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0, M = 0, begin = 0, end = 0;
    int v1 = 0, v2 = 0, e = 0, cur = 0, dis = 0;
    int D[1000] = {0,};
    vector<vector<Pair> > arr;
    priority_queue<Pair,vector<Pair>,greater<Pair> > heap;
    
    cin >> N;
    cin >> M;
    
    arr.resize(N);
    
    for(int i=0;i<N;i++){
        D[i] = INT_MAX;
    }
    
    for(int i=0;i<M;i++){
        cin >> v1 >> v2 >> e;
        arr[v1-1].push_back({v2-1,e});
    }
    cin >> begin >> end;
    
    
    D[begin-1] = 0;
    heap.push({0,begin-1});

    while(!heap.empty()){

        cur = heap.top().second;
        dis = heap.top().first;

        heap.pop();

        if(D[cur] >= dis){
            for(auto it : arr[cur]){
                if(D[it.first] > it.second + dis){
                    D[it.first] = it.second + dis;
                    heap.push({it.second + dis,it.first});
                }
            }
        }
    }

    cout << D[end-1] << "\n";
    
    return 0;
}
