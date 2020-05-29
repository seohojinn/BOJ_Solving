#include <iostream>
#include <algorithm>

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

class Tree{
    private:
        Node * root;
    public:
        Tree(){
            root = NULL;
        }
        void insert_node(Node * data);
        int search_node(int data);
};

void Tree::insert_node(Node * data){
    
    Node * parent_node = root;
    if(root == NULL){
        root = data;
        return ;
    }
    
    while(1){
        if(parent_node->value > data->value){
            if(parent_node->left == NULL){
                parent_node->left = data;
                break;
            }
            else{
                parent_node = parent_node->left;
            }
        }
        else if(parent_node->value < data->value){
            if(parent_node->right == NULL){
                parent_node->right = data;
                break;
            }
            else{
                parent_node = parent_node->right;
            }
        }
    }
    
}

int Tree::search_node(int data){
    Node * me = root;
    while(1){
        if(me->value == data){
            return 1;
        }
        else if(me->value < data && me->right != NULL){
            me = me->right;
        }
        else if(me->value > data && me->left != NULL){
            me = me->left;
        }
        else if(me->value < data && me->right == NULL){
            return 0;
        }
        else if(me->value > data && me->left == NULL){
            return 0;
        }
    }
}

int main(){
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    Node arr[100000];
    int arr2[100000] = {0,};
    int N = 0, M = 0;
    Tree guard;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> arr[i].value;
        guard.insert_node(&arr[i]);
    }
    
    cin >> M;
    
    for(int i=0;i<M;i++){
        cin >> arr2[i];
        arr2[i] = guard.search_node(arr2[i]);
    }
    
    for(int i=0;i<M;i++){
        cout << arr2[i] << endl;
    }
    
    return 0;
}
