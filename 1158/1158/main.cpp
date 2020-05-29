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
    
    int K = 0, N = 0;
    Node arr[5000];
    Node * ptr;
    size_t size = 0;
    vector<int> value;
    
    cin >> K >> N;
    
    for(int i=0;i<K;i++){
        arr[i].data = i + 1;
        if(i == 0){
            arr[i].left = &arr[K-1];
            arr[i].right = &arr[i+1];
        }
        else if(i == K-1){
            arr[i].left = &arr[i-1];
            arr[i].right = &arr[0];
        }
        else{
            arr[i].left = &arr[i-1];
            arr[i].right = &arr[i+1];
        }
    }
    
    ptr = &arr[0];
    while(value.size() != K){
        for(int i=0;i<N-1;i++){
            ptr = ptr->right;
        }
        value.push_back(ptr->data);
        ptr->left->right = ptr->right;
        ptr->right->left = ptr->left;
        ptr = ptr->right;
    }
    
    size = value.size();
    cout << '<';
    for(size_t i=0;i<size;i++){
        cout << value[i];
        if(i != size-1){
            cout << ", ";
        }
    }
    
    cout << '>' << endl;
    
    return 0;
}
