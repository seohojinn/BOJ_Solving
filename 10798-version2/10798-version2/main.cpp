#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    
    char word [15][16]= {0,};
    vector<char> value;
    char data[16] = {0,};
    int size = 0;
    
    for(int i=0;i<5;i++){
        cin >> data;
        size = int(strlen(data));
        for(int j=0;j<15;j++){
            if(j < size){
                word[i][j] = data[j];
            }
            else{
                word[i][j] = ' ';
            }
        }
    }
    
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            if(word[j][i] != 0 && word[j][i] != ' '){
                value.push_back(word[j][i]);
            }
        }
    }
    
    for(auto it : value){
        cout << it;
    }
    
    cout << endl;
    
    return 0;
}
