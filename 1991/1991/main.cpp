#include <iostream>
#include <vector>

using namespace std;

vector<vector<char> >arr;
int check[26];

void preorder(char data){
    
    cout << data;
    int idx = data-'A';
    
    check[idx] = 1;

  
    if(arr[idx][1] != '.' && check[arr[idx][1]-'A'] == 0){
        preorder(arr[idx][1]);
    }
    
    if(arr[idx][2] != '.' && check[arr[idx][2]-'A'] == 0){
        preorder(arr[idx][2]);
    }
    
}

void inorder(char data){
    
    int idx = data-'A';
    
    check[idx] = 1;

    if(arr[idx][1] != '.' && check[arr[idx][1]-'A'] == 0){
        inorder(arr[idx][1]);
    }
    
    cout << data;
    
    if(arr[idx][2] != '.' && check[arr[idx][2]-'A'] == 0){
        inorder(arr[idx][2]);
    }
    
}

void postorder(char data){
    
    int idx = data-'A';
    
    check[idx] = 1;

    if(arr[idx][1] != '.' && check[arr[idx][1]-'A'] == 0){
        postorder(arr[idx][1]);
    }
    
    if(arr[idx][2] != '.' && check[arr[idx][2]-'A'] == 0){
        postorder(arr[idx][2]);
    }
    
    cout << data;
    
}

int main() {
    
    int N = 0;
    char parent, right, left;
    cin >> N;
    
    arr.resize(N);
    
    for(int i=0;i<N;i++){
        arr[i].push_back(65+i);
    }
    
    for(int i=0;i<N;i++){
        cin >> parent >> left >> right;
        arr[parent-'A'].push_back(left);
        arr[parent-'A'].push_back(right);
    }

    
    preorder('A');
    cout << endl;
    
    for(int i=0;i<26;i++){
        check[i] = 0;
    }
    
    inorder('A');
    cout << endl;
    
    for(int i=0;i<26;i++){
        check[i] = 0;
    }
    
    postorder('A');
    cout << endl;
    

    return 0;
}
