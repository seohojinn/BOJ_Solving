#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

typedef pair<int,int> Pair;

int main() {

    ios::sync_with_stdio(false);
    
    vector<Pair> arr;
    int dp[100] = {0,};
    int N = 0, data = 0, data2 = 0, max = 0;
    
    cin >> N;
    
    dp[0] = 1;
    
    for(int i=0;i<N;i++){
        cin >> data >> data2;
        if(data > data2){
            arr.push_back({data,data2});
        }
        else{
            arr.push_back({data2,data});
        }
    }
    
    sort(arr.begin(),arr.end());
    
    for(auto it : arr){
        cout << it.first << " " << it.second << endl;
    }
    
    for(int i=1;i<N;i++){
        max = 0;
        for(int j=0;j<i;j++){
            if(((arr[j].first <= arr[i].first && arr[j].second <= arr[i].second) || (arr[j].first <= arr[i].second && arr[j].second <= arr[i].first)) && max < dp[j]){
                max = dp[j];
            }
        }
        if(max == 0){
            dp[i] = 1;
        }
        else{
            dp[i] = max + 1;
        }
    }
    
    cout << *max_element(dp, dp+N) << "\n";

    return 0;
}
