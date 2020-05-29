#include <cstdio>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    int V = 0, E = 0, K = 0, u = 0, v = 0, w = 0;
    int cur = 0, dis = 0;
    int D[20000] = {0,};
    vector<vector<Pair> > arr;
    priority_queue<Pair> value;
    
    scanf("%d %d",&V, &E);
    scanf("%d",&K);
    
    arr.resize(V);
    
    for(int i=0;i<V;i++){
        D[i] = 1000000;
    }
    
    for(int i=0;i<E;i++){
        scanf("%d %d %d",&u, &v, &w);
        arr[u-1].push_back({v-1,w});
    }
    
    value.push({0,K-1});
    
    D[K-1] = 0;

    while(!value.empty()){

        dis = value.top().first * -1;
        cur = value.top().second;
        
        value.pop();
        
        if(D[cur] >= dis){
            for(auto it : arr[cur]){
                if(dis + it.second < D[it.first]){
                    D[it.first] = it.second + dis;
                    value.push({(dis + it.second) * -1,it.first});
                }
            }
        }
    }

    for(int i=0;i<V;i++){
        if(D[i] == 1000000){
            printf("INF\n");
        }
        else{
            printf("%d\n",D[i]);
        }
    }
    
    return 0;
}
