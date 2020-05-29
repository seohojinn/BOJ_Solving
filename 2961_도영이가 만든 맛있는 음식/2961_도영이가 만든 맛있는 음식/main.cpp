#include <iostream>
#include <utility>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

typedef pair<long long, long long> Pair;

Pair arr[10];
int N;
long long min_value = LONG_LONG_MAX;

void func(int idx, Pair data){
    
    if(idx >= N){
        return ;
    }
    
    for(int i=idx;i<N;i++){
        if(idx == 0){
            min_value = min(min_value, abs(arr[i].first-arr[i].second));
            func(i+1,{arr[i].first,arr[i].second});
        }
        else{
            min_value = min(min_value, abs((data.first*arr[i].first) - (data.second+arr[i].second)));
            func(i+1,{data.first*arr[i].first,data.second+arr[i].second});
        }
    }
    
}

int main() {
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    
    func(0,{0,0});
    
    cout << min_value << "\n";
    
    return 0;
}
