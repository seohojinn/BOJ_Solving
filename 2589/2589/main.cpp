#include <iostream>

using namespace std;

int main() {
    
    char arr[50][51] = {0,};
    int N = 0, M = 0;
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    
    
    
    return 0;
}
