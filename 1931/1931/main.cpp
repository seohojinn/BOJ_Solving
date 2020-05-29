#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<Pair> arr;
    int N = 0, data = 0, data2 = 0, count = 1, idx = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> data >> data2;
        arr.push_back({data2,data});
    }
    
    sort(arr.begin(),arr.end());
    
//    for(auto it : arr){
//        cout << it.second << " " << it.first << endl;
//    }
    
    for(int i=1;i<N;i++){
        if(arr[idx].first <= arr[i].second){
            count += 1;
            idx = i;
        }
    }
    
    cout << count << "\n";

    return 0;
}
