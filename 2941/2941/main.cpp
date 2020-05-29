#include <iostream>
#include <cstirng>

using namespace std;

int main() {
    
    char arr[101] = {0,};
    int check[100] = {0,};
    int size = 0, size2 = 0, value = 0;
    
    char data[8][10] = {{'c','='},
                        {'c','-'},
                        {'d','z','='},
                        {'d','-'},
                        {'l','j'},
                        {'n','j'},
                        {'s','='},
                        {'z','='}
                        };
    
    cin >> arr;
    size = int(strlen(arr));
    
    for(int i=0;i<8;i++){
        size2 = int(strlen(data[i]));
        for(int j=size2-1;j<size;j++){
            if(size2 == 2 && arr[j-1] == data[i][0] && arr[j] == data[i][1]){
                check[j-1] += 1;
                check[j] += 1;
                value += 1;
                if(check[j-1] > 1 || check[j] > 1){
                    value -= 1;
                }
            }
            if(size2 == 3 && arr[j-2] == data[i][0] && arr[j-1] == data[i][1] && arr[j] == data[i][2]){
                check[j-2] += 1;
                check[j-1] += 1;
                check[j] += 1;
                value += 1;
                if(check[j-2] > 1 || check[j-1] > 1 || check[j] > 1){
                    value -= 1;
                }
            }
        }
    }
    
    for(int i=0;i<size;i++){
        if(check[i] == 0){
            value += 1;
        }
    }
    
//    for(int i=0;i<size;i++){
//        cout << check[i] << " ";
//    }
//    cout << endl;
    
    cout << value << "\n";
    
    return 0;
}
