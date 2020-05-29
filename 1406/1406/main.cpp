#include <iostream>
#include <cstring>

using namespace std;

class Node{
    public:
        Node * right;
        Node * left;
        char word;
        Node(){
            right = NULL;
            left = NULL;
            word = ' ';
        }
};

Node arr[100000];
Node arr2[500000];

int main() {
    
    Node * idx;
    Node * first;
    Node tmp;
    char data[100001] = {0,};
    char commend;
    int M = 0, size = 0, idx2 = 0;
    
    cin >> data;
    cin >> M;
    
    size = int(strlen(data));
    
    for(int i=0;i<size;i++){
        arr[i].word = data[i];
        if(i != 0){
            arr[i].left = &arr[i-1];
        }
        if(i != size-1){
            arr[i].right = &arr[i+1];
        }
    }
    
    idx = &arr[size-1];
    first = &arr[0];
    
    for(int i=0;i<M;i++){
        cin >> commend;
        if(commend == 'P'){
            cin >> arr2[idx2].word;
            if(idx->word == ' ' && idx->right != NULL){
                idx = idx->right;
                idx->left = &arr2[idx2];
                arr2[idx2].right = idx;
                idx = idx->left;

                first = idx;
            }
            else if(idx->word == ' ' && idx->right == NULL){
                idx->right = &arr2[idx2];
                idx = idx->right;
                first = idx;
            }
            else if(idx->right == NULL){
                idx->right = &arr2[idx2];
                arr2[idx2].left = idx;
                idx = idx->right;
            }
            else{
                idx->right->left = &arr2[idx2];
                arr2[idx2].right = idx->right;
                idx->right = &arr2[idx2];
                arr2[idx2].left = idx;
                idx = idx->right;

            }
            idx2 += 1;
            
        }
        else if(commend == 'L' && idx->word != ' '){
            if(idx->left == NULL){
                tmp.right = idx;
                idx = &tmp;
            }
            else{
                idx = idx->left;
            }
        }
        else if(commend == 'D' && idx->right != NULL){
            idx = idx->right;
        }
        else if(commend == 'B' && idx->word != ' '){
            if(idx->left == NULL){
                if(idx->right != NULL){
                    tmp.right = idx->right;
                    tmp.right->left = NULL;
                    idx->right = NULL;
                }
                idx = &tmp;
                first = idx;
            }
            else if(idx->right == NULL){
                idx = idx->left;
                idx->right->left = NULL;
                idx->right = NULL;
            }
            else{
                idx->left->right = idx->right;
                idx->right->left = idx->left;
                idx = idx->left;
            }
        }
    }
    
    while(first != NULL){
        if(first->word != ' '){
            cout << first->word;
        }
        first = first->right;
    }

    cout << endl;
  
    
    return 0;
}
