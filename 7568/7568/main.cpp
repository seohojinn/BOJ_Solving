#include <iostream>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

int main() {
    
    vector<Pair> arr;
    vector<int> data;
    int N = 0, x = 0, y = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> x >> y;
        arr.push_back({x,y});
        data.push_back(1);
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i != j && arr[i].first < arr[j].first && arr[i].second < arr[j].second){
                data[i] += 1;
            }
        }
    }
    
    for(auto it : data){
        cout << it << " ";
    }
        
    cout << endl;
    
    return 0;
}
