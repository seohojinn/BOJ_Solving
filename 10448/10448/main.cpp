#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    vector<int> data;
    int T = 0, K = 0, count = 3, back = 0;
    int size = 0, bit = 0;
    
    cin >> T;
    
    data.push_back(1);
    data.push_back(3);
    
    do{
        back = data.back();
        data.push_back(back + count);
        count += 1;
    }while(back + count <= 1000);
    
    size = int(data.size()) - 1;
    
    for(int i=0;i<T;i++){
        cin >> K;
        bit = 0;
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                for(int l=0;l<size;l++){
                    if(data[j] + data[k] + data[l] == K){
                        bit = 1;
                    }
                }
            }
        }
        cout << bit << "\n";
    }

    return 0;
}
