#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int data = 0, max_value = -1, max_count = 0, tmp = 0, tmp2 = 0, tmp3 = 0, count = 2, idx = 0;
    vector<int> value;
    
    cin >> data;
    
    for(int i=1;i<=data;i++){
        tmp = data;
        tmp2 = i;
        count = 2;
        while(1){
            if(tmp - tmp2 < 0){
                break;
            }
            tmp3 = tmp;
            tmp = tmp2;
            tmp2 = tmp3 - tmp2;
            count += 1;
        }
        if(max_value < count){
            max_value = count;
            max_count = i;
        }
    }
    
    cout << max_value << "\n";
    
    value.push_back(data);
    value.push_back(max_count);
    
    while(value[idx] - value[idx+1] >= 0){
        value.push_back(value[idx] - value[idx+1]);
        idx += 1;
    }
    
    for(auto it : value){
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}
