#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    char word[16] = {0,};
    int size = 0;
    
    cin >> word;
    
    size = int(strlen(word));
    
    for(int i=0;i<size;i++){
        for(int j=0;j<4;j++){
            if(j == 2){
                if(i == 2 || i == 5 || i == 8 || i == 11 || i == 14){
                    cout << "*";
                }
                else{
                    cout << "#";
                }
            }
            else{
                cout << ".";
            }
        }
    }
    cout << "." << "\n";
    
    for(int i=0;i<size;i++){
        for(int j=0;j<4;j++){
            if(j == 1 || j == 3){
                if(i == 2 || i == 5 || i == 8 || i == 11 || i == 14){
                    cout << "*";
                }
                else{
                    cout << "#";
                }
            }
            else{
                cout << ".";
            }
        }
    }
    cout << "." << "\n";
    
    for(int i=0;i<size;i++){
        for(int j=0;j<4;j++){
            if(j == 0){
                if(i == 2 || i == 3 || i == 5 || i == 6 || i == 8 || i == 9 || i == 11 || i == 12 || i == 14){
                    cout << "*";
                }
                else{
                    cout << "#";
                }
            }
            else if(j == 2){
                cout << word[i];
            }
            else{
                cout << ".";
            }
        }
    }
    if(size - 1 == 2 || size - 1 == 5 || size - 1 == 8 || size - 1 == 11 || size - 1 == 14){
        cout << "*" << "\n";
    }
    else{
        cout << "#" << "\n";
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<4;j++){
            if(j == 1 || j == 3){
                if(i == 2 || i == 5 || i == 8 || i == 11 || i == 14){
                    cout << "*";
                }
                else{
                    cout << "#";
                }
            }
            else{
                cout << ".";
            }
        }
    }
    cout << "." << "\n";
    
    for(int i=0;i<size;i++){
        for(int j=0;j<4;j++){
            if(j == 2){
                if(i == 2 || i == 5 || i == 8 || i == 11 || i == 14){
                    cout << "*";
                }
                else{
                    cout << "#";
                }
            }
            else{
                cout << ".";
            }
        }
    }
    cout << "." << "\n";
    
    
    
    return 0;
}
