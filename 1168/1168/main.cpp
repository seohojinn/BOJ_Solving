#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
        Node * right;
        Node * left;
        int value;
        Node(){
            right = NULL;
            left = NULL;
            value = 0;
        }
};

int main(){
    
    ios::sync_with_stdio(false);
    
    Node arr[100000];
    Node * addr = &arr[0];
    int N = 0, K = 0, size = 0;
    vector<int> value;
    
    cin >> N >> K;
    
    for(int i=0;i<N;i++){
        arr[i].value = i + 1;
        if(i == N - 1){
            arr[i].right = &arr[0];
            arr[i].left = &arr[i-1];
        }
        else if(i == 0){
            arr[i].left = &arr[N-1];
            arr[i].right = &arr[i+1];
        }
        else{
            arr[i].right = &arr[i+1];
            arr[i].left = &arr[i-1];
        }
        
    }
    
    while(N != 0){
        for(int i=0;i<K-1;i++){
            addr = addr->right;
        }
        value.push_back(addr->value);
        addr->right->left = addr->left;
        addr->left->right = addr->right;
        addr = addr->right;
        N -= 1;
    }
    
    size = int(value.size());
    
    cout << "<";
    for(int i=0;i<size;i++){
        cout << value[i];
        if(i != size - 1){
            cout << ", ";
        }
    }
    
    cout << ">" << "\n";
    
    return 0;
}
