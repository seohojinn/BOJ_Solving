#include <iostream>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int,int> Pair;

vector<Pair> arr;
vector<int> data;

int check(int data_i,int data_j){
    
    int size = int(arr.size());
    
    if(data_i >= data_j){
        return 0;
    }
    
    for(int i=0;i<size;i++){
        if((arr[i].first == data_i && arr[i].second == data_j) || (arr[i].first == data_j && arr[i].second == data_i)){
            return 0;
        }
    }
    
    return 1;
    
}

int main() {
    
    int count = 0, value = 0, sum_data = 0, size = 0;
    
    while(1){
        cin >> value;
        if(cin.eof()){
            break;
        }
        data.push_back(value);
    }
    
    size = int(data.size());
    
    cout << "aaa" << endl;
    
    cin >> sum_data;
    
    cout << "a" << endl;
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(data[i] + data[i] == sum_data && check(data[i],data[i])){
                arr.push_back({data[i],data[j]});
                count += 1;
            }
        }
    }
    
    for(auto it : arr){
        cout << it.first << " " << it.second << endl;
    }
    
    cout << count << endl;
    
    return 0;
}
