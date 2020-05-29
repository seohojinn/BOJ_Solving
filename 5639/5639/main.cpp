#include <iostream>

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
    public:
        Node * root;
    
        Tree(){
            root = NULL;
        }
        void insert_node(Node * insert_data);
        void search_node(Node * data);
};

void Tree::insert_node(Node * insert_data){
    Node * data = root;
    
    if(root == NULL){
        root = insert_data;
        return ;
    }
    
    while(1){
        if(data->value > insert_data->value){
            if(data->left == NULL){
                data->left = insert_data;
                break;
            }
            else{
                data = data->left;
            }
        }
        else if(data->value < insert_data->value){
            if(data->right == NULL){
                data->right = insert_data;
                break;
            }
            else{
                data = data->right;
            }
        }
    }
    
}

void Tree::search_node(Node * data){
    
    if(data->left != NULL){
        //cout << data->left->value << " " << data->right->value << endl;
        search_node(data->left);
    }
    if(data->right != NULL){
        //cout << data->left->value << " " << data->right->value << endl;
        search_node(data->right);
    }
    cout << data->value << endl;
    
}

int main() {
    
    Node arr[10000];
    Tree guard;
    int i = 0;
    

    while(1){
        cin >> arr[i].value;
        if(cin.eof() == true){
            break;
        }
        guard.insert_node(&arr[i]);
        i += 1;
    }
    
    guard.search_node(guard.root);
    
    return 0;
}
