#include <iostream>
#include <deque>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

int main() {
    
    int N = 0 ,K = 0, W = 0, V = 0, max = -1;
    Pair tmp;
    deque<Pair> arr;
    deque<Pair> value;
    
    cin >> N >> K;
    
    for(int i=0;i<N;i++){
        cin >> W >> V;
        arr.push_back({W,V});
    }
    
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            value.push_back(arr[j]);
        }
        while(!value.empty()){
            tmp = value.front();
            value.pop_front();
            if(tmp.second > max){
                max = tmp.second;
            }
            for(auto it : value){
                if(tmp.first + it.first <= K){
                    value.push_back({tmp.first+it.first,tmp.second+it.second});
                }
            }
        }
    }
    
    cout << max << endl;
    
    return 0;
}
