#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    char arr[50][51] = {0,};
    vector<int> value;
    int bit = 0,count = 0;
    
    int N = 0, M = 0;
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=8;i<=N;i++){
        for(int j=8;j<=M;j++){
            bit = 0;
            for(int k=i-8;k<i;k++){
                for(int l=j-8;l<j;l++){
                    if(bit == 0 && arr[k][l] == 'W'){
                        count += 1;
                    }
                    else if(bit == 1 && arr[k][l] == 'B'){
                        count += 1;
                    }
                    bit = (bit == 1) ? 0 : 1;
                }
                bit = (bit == 1) ? 0 : 1;
            }
            value.push_back(count);
            count = 0;
            bit = 1;
            for(int k=i-8;k<i;k++){
                for(int l=j-8;l<j;l++){
                    if(bit == 0 && arr[k][l] == 'W'){
                        count += 1;
                    }
                    else if(bit == 1 && arr[k][l] == 'B'){
                        count += 1;
                    }
                    bit = (bit == 1) ? 0 : 1;
                }
                bit = (bit == 1) ? 0 : 1;
            }
            value.push_back(count);
            count = 0;
        }
    }
    
    cout << *min_element(value.begin(), value.end()) << endl;
    
    
    return 0;
}
