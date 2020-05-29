#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> Pair;

int main() {

    vector<Pair> arr;
    int N = 0, data = 0, data2 = 0;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> data >> data2;
        arr.push_back({data,data2});
    }

    sort(arr.begin(),arr.end());

    for(int i=0;i<N;i++){
        cout << arr[i].first << " : " << arr[i].second << endl;
    }

    return 0;
}
