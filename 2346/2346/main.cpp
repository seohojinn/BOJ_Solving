#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        int idx;
        Node * right;
        Node * left;
        Node(){
            data = 0;
            idx = 0;
            right = NULL;
            left = NULL;
        }
};

int main() {
    
    int N = 0, count = 0;
    Node arr[1000];
    Node * idx;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i].data;
        arr[i].idx = i + 1;
        if(i == 0){
            arr[i].left = &arr[N-1];
            arr[i].right = &arr[i+1];
        }
        else if(i == N-1){
            arr[i].left = &arr[i-1];
            arr[i].right = &arr[0];
        }
        else{
            arr[i].left = &arr[i-1];
            arr[i].right = &arr[i+1];
        }
    }
    
    idx = &arr[0];
    for(int i=0;i<N;i++){
        count = idx->data;
        cout << idx->idx << " ";
        idx->right->left = idx->left;
        idx->left->right = idx -> right;
        if(count < 0){
            for(int i=count;i<0;i++){
                idx = idx->left;
            }
        }
        else if(count > 0){
            for(int i=0;i<count;i++){
                idx = idx->right;
            }
        }
    }
    
    cout << endl;
    
    return 0;
}
