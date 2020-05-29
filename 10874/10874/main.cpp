#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr;
    int data[100][10] = {0,};
    int value[10] = {1,2,3,4,5,1,2,3,4,5};
    int N = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<10;j++){
            cin >> data[i][j];
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<10;j++){
            if(data[i][j] != value[j]){
                break;
            }
            else if(j == 9){
                arr.push_back(i+1);
            }
        }
    }
    
    for(auto it : arr){
        cout << it << endl;
    }
    
    return 0;
}
