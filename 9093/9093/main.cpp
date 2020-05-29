#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main() {
    
    int T = 0, size = 0;
    stack<char> arr;
    char data[1001] = {0,};
    
    cin >> T;
    cin.ignore();
    
    for(int t=0;t<T;t++){
        
        cin.getline(data,1000);
        size = int(strlen(data));
    
        for(int i=0;i<=size;i++){
            if(data[i] == ' ' || i == size){
                while(!arr.empty()){
                    cout << arr.top();
                    arr.pop();
                }
                cout << " ";
            }
            else{
                arr.push(data[i]);
            }
        }
        cout << endl;
        memset(data,'\0',sizeof(data));
    }
    
    return 0;
}
