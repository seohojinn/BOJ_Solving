#include <iostream>
#include <algorithm>
#include <deque>
#include <utility>

using namespace std;

deque<deque<deque<char> > > data;
deque<deque<char> > tmp(8,deque<char>(8));
deque<int> bfs;
int N, M ,size;
int bit, bit2, bit3;

void search(int num){
    
    size = int(data.size());
    
    for(int i=0;i<size;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                tmp[j][k] = data[i][j][k];
            }
        }
        bit = 0;
        while(bit == 0){
            bit2 = 0;
            bit3 = 0;
            for(int j=0;j<N;j++){
                for(int k=0;k<M;k++){
                    if(num == 0){
                        if(bit3 == 0 && tmp[j][k] == '3'){
                            tmp[j][k] = '6';
                            bit3 = 1;
                        }
                        else if(tmp[j][k] != '1' && tmp[j][k] != '2' && tmp[j][k] != '3' && tmp[j][k] != '4' && tmp[j][k] != '5' && tmp[j][k] != '6' && bit2 == 0){
                            tmp[j][k] = '3';
                            bit2 = 1;
                        }
                    }
                    else if(bit3 == 0 && num == 1){
                        if(tmp[j][k] == '4'){
                            tmp[j][k] = '7';
                            bit3 = 1;
                        }
                        else if(tmp[j][k] != '1' && tmp[j][k] != '2' && tmp[j][k] != '3' && tmp[j][k] != '4' && tmp[j][k] != '5' && tmp[j][k] != '7' && bit2 == 0){
                            tmp[j][k] = '4';
                            bit2 = 1;
                        }
                    }
                    else if(bit3 == 0 && num == 2){
                        if(tmp[j][k] == '5'){
                            tmp[j][k] = '8';
                            bit3 = 1;
                        }
                        else if(tmp[j][k] != '1' && tmp[j][k] != '2' && tmp[j][k] != '3' && tmp[j][k] != '4' && tmp[j][k] != '5' && tmp[j][k] != '8' && bit2 == 0){
                            tmp[j][k] = '5';
                            bit2 = 1;
                        }
                    }
                }
                if(bit2 == 1 && bit3 == 1){
                    data.push_back(tmp);
                    break;
                }
                else if(j == N-1 && bit2 == 0 && bit3 == 0){
                    data.push_back(tmp);
                    bit = 1;
                }
            }
        }
    }
}

int main() {
    
    deque<deque<char> > arr(8,deque<char>(8));
    int count = 0;
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
            if(arr[i][j] == '0' && count < 3){
                if(count == 0){
                    arr[i][j] = '3';
                }
                else if(count == 1){
                    arr[i][j] = '4';
                }
                else if(count == 2){
                    arr[i][j] = '5';
                }
                count += 1;
            }
        }
    }
    
    data.push_back(arr);
    
    
    
    for(int i=0;i<3;i++){
        search(i);
    }
    
    size = int(data.size());
    
    
    for(int a=0;a<size;a++){
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                
                if(i != 0 && data[a][i][j] == '2' && data[a][i-1][j] != '1' && data[a][i-1][j] != '2' && data[a][i-1][j] != '3' &&data[a][i-1][j] != '4' && data[a][i-1][j] != '5'){
                    data[a][i-1][j] = '2';
                }
                
            }
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout << data[0][i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
