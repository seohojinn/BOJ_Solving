#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int arr[201][201];

int main() {
    
    char word[201] = {0,};
    char word2[201] = {0,};
    int size = 0, size2 = 0;
    
    cin >> word >> word2;
    
    while(!cin.eof()){
        size = int(strlen(word));
        size2 = int(strlen(word2));
        
        for(int i=1;i<=size;i++){
            for(int j=1;j<=size2;j++){
                if(word[i-1] == word2[j-1]){
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
                else{
                    arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        cout << *max_element(arr[size],arr[size]+size2+1) << "\n";
        cin >> word >> word2;
    }
    
    
    return 0;
}
