#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0, begin = 0, end = 0, sum = 0;
    int data = 0, data2 = 0;
    vector<Pair> arr;
    
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> begin >> end;
        arr.push_back({begin,end});
    }
    
    sort(arr.begin(),arr.end());
    
    data = arr[0].first;
    data2 = arr[0].second;
    
    for(int i=1;i<N;i++){
        if(arr[i].first > data2){
            //cout << data << " " << data2 << endl;
            sum += data2 - data;
            data = arr[i].first;
            data2 = arr[i].second;
        }
        else{
            data2 = max(arr[i].second,data2);
        }
    }
    
    sum += data2 - data;

    cout << sum << "\n";
    
    return 0;
}
