#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int lcs[1001][1001];
char arr[1001];
char arr2[1001];
string word;

void back(int n, int m){
    if(n == 0 || m == 0){
        return ;
    }
    if(lcs[n][m] > lcs[n-1][m-1] && lcs[n][m] > lcs[n][m-1] && lcs[n][m] > lcs[n-1][m]){
        word = arr[n-1] + word;
        back(n-1,m-1);
    }
    else if(lcs[n][m] > lcs[n-1][m] && lcs[n][m] == lcs[n][m-1]){
        back(n,m-1);
    }
    else{
        back(n-1,m);
    }
}

int main() {
    
    ios::sync_with_stdio(false);

    int size = 0, size2 = 0;
    
    cin >> arr >> arr2;
    
    size = int(strlen(arr));
    size2 = int(strlen(arr2));
    
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size2;j++){
            if(arr[i-1] == arr2[j-1]){
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }
            else{
                lcs[i][j] = max(lcs[i][j-1],lcs[i-1][j]);
            }
        }
    }

    
//    cout << "  ";
//    
//    for(int i=0;i<size2;i++){
//        cout << arr2[i] << " ";
//    }
//    cout << endl;
//    for(int i=1;i<=size;i++){
//        cout << arr[i-1] << " ";
//        for(int j=1;j<=size2;j++){
//            cout << lcs[i][j] << " ";
//        }
//        cout << endl;
//    }
    
    
    back(size,size2);
    
    cout << word.length() << "\n";
    cout << word << "\n";
    
    return 0;
}
