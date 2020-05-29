#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
        int data;
        Node * right;
        Node * left;
        Node(){
            data = 0;
            right = NULL;
            left = NULL;
        }
};

int main() {
    
    Node arr[1000];
    Node * tmp;
    vector<int> value;
    int N = 0, K = 0;
    
    cin >> N >> K;
    
    for(int i=0;i<N;i++){
        if(i == 0){
            arr[i].left = &arr[N-1];
            arr[i].right = &arr[i+1];
        }
        else if(i == N-1){
            arr[i].left = &arr[i-1];
            arr[i].right = &arr[0];
        }
        else{
            arr[i].right = &arr[i+1];
            arr[i].left = &arr[i-1];
        }
        arr[i].data = i+1;
    }
    
    tmp = &arr[0];
    
    while(value.size() != N){
        for(int i=0;i<K-1;i++){
            tmp = tmp->right;
        }
        value.push_back(tmp->data);
        tmp->left->right = tmp->right;
        tmp->right->left = tmp->left;
        tmp = tmp->right;
    }
    
    cout << "<";
    
    for(int i=0;i<N;i++){
        cout << value[i];
        if(i != N-1){
            cout << ", ";
        }
    }
    
    cout << ">" << endl;
    
    return 0;
}
