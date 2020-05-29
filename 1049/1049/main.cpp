#include <iostream>
#include <algorithm>
#include <climits>
#include <utility>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N = 0, M = 0, min_value = INT_MAX, min_value2 = INT_MAX, data = 0, data2 = 0;
    int tmp = 0, tmp2 = 0;
    
    cin >> N >> M;
    
    for(int i=0;i<M;i++){
        cin >> data >> data2;
        min_value = min(min_value,data);
        min_value2 = min(min_value2,data2);
    }
    
    if(6 >= N){
        cout << min(min_value , min_value2 * N) << "\n";
    }
    else if(6 < N && 6 % N != 0){
        tmp = N / 6;
        tmp2 = N % 6;
        cout << min(min((tmp + 1) * min_value, (tmp * min_value) + (tmp2 * min_value2)), min_value2 * N) << "\n";
    }
    else if(6 < N && 6 % N == 0){
        tmp = N / 6;
        cout << min(min_value * tmp, min_value2 * N) << "\n";
    }
    
    
    return 0;
}
