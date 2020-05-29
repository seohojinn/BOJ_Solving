#include <iostream>
#include <list>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0;
    int arr[100] = {0,};
    list<int> value;
    list<int> :: iterator iter;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    value.push_back(1);
    iter = value.end();

    
    for(int i=1;i<N;i++){
        iter = value.end();

        for(int j=0;j<arr[i];j++){
            iter--;
        }
        value.insert(iter, i + 1);
    }

    for(auto it : value){
        cout << it << " ";
    }

    cout << "\n";
    
    
    return 0;
}
