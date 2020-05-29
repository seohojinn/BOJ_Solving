#include <iostream>
#include <cstring>

using namespace std;

int arr[4002][4002];

int main() {
    
    char str[4002] = {0,};
    char str2[4002] = {0,};
    int size = 0, size2 = 0, max_value = 0;
    
    cin >> str;
    cin >> str2;
    
    size = int(strlen(str));
    size2 = int(strlen(str2));
    
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size2;j++){
            if(str[i-1] == str2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
                if(max_value < arr[i][j]){
                    max_value = arr[i][j];
                }
            }
        }
    }
    
//    cout << "    ";
//    for(int i=0;i<=size2;i++){
//        cout << str2[i] << " ";
//    }
//    cout << endl;
//    for(int i=0;i<=size;i++){
//        if(i != 0){
//            cout << str[i-1] << " ";
//        }
//        else{
//            cout << "  ";
//        }
//        for(int j=0;j<=size2;j++){
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    
    cout << max_value << "\n";
    
    return 0;
}
