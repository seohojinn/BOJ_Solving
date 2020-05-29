#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    Pair arr[100000];
    int T = 0, N = 0, count = 1;
    
    scanf("%d",&T);
    
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        
        count = 1;
        for(int j=0;j<N;j++){
            scanf("%d %d",&arr[j].first ,&arr[j].second);
        }
        
        sort(arr,arr+N);
        
        for(int j=N-1;j>0;j--){
            for(int k=j-1;k>=0;k--){
                if(arr[j].second > arr[k].second){
                    count -= 1;
                    break;
                }
            }
            count += 1;
        }

        printf("%d\n",count);
    }
    
    return 0;
}
