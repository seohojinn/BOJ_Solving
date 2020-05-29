#include <iostream>
#include <utility>
#include <deque>

using namespace std;

deque<deque<deque<int> > > data;
int N, size, size2;
pair<int,int> data_idx;
int max_data = -1;

void search(int idx,int num){
    if(num == 0){
        for(int i=0;i<N;i++){
            data_idx.first = 0;
            data_idx.second = i;
            for(int j=1;j<N;j++){
                if(data[idx][data_idx.first][data_idx.second] == 0 && data[idx][j][i] != 0){
                    data[idx][data_idx.first][data_idx.second] = data[idx][j][i];
                    data[idx][j][i] = 0;
                }
                else if(data[idx][data_idx.first][data_idx.second] != 0 && data[idx][j][i] != 0){
                    if(data[idx][data_idx.first][data_idx.second] == data[idx][j][i]){
                        data[idx][data_idx.first][data_idx.second] += data[idx][j][i];
                        data_idx.first += 1;
                        data[idx][j][i] = 0;
                    }
                    else if(data[idx][data_idx.first][data_idx.second] != data[idx][j][i] && data_idx.first+1 != j){
                        data_idx.first += 1;
                        data[idx][data_idx.first][data_idx.second] = data[idx][j][i];
                        data[idx][j][i] = 0;
                    }
                    else{
                        data_idx.first += 1;
                    }
                }
            }
        }
    }
    
    else if(num == 1){
        for(int i=0;i<N;i++){
            data_idx.first = i;
            data_idx.second = N - 1;

            for(int j=N-2;j>=0;j--){
                if(data[idx][data_idx.first][data_idx.second] == 0 && data[idx][i][j] != 0){
                    data[idx][data_idx.first][data_idx.second] = data[idx][i][j];
                    data[idx][i][j] = 0;
                    //cout << "a" << endl;
                }
                else if(data[idx][data_idx.first][data_idx.second] != 0 && data[idx][i][j] != 0){

                    if(data[idx][data_idx.first][data_idx.second] == data[idx][i][j]){
                        data[idx][data_idx.first][data_idx.second] += data[idx][i][j];
                        data_idx.second -= 1;
                        data[idx][i][j] = 0;
                        //cout << "b" << endl;
                    }
                    else if(data[idx][data_idx.first][data_idx.second] != data[idx][i][j] && data_idx.second-1 != j){
                        data_idx.second -= 1;
                        data[idx][data_idx.first][data_idx.second] = data[idx][i][j];
                        data[idx][i][j] = 0;
                        //cout << "c " << j <<  endl;
                    }
                    else{
                        data_idx.second -= 1;
                        //cout << "d" << endl;
                    }
                }
        
            }
        }
    }
    
    else if(num == 2){
        for(int i=0;i<N;i++){
            data_idx.first = N - 1;
            data_idx.second = i;
            for(int j=N-2;j>=0;j--){
                if(data[idx][data_idx.first][data_idx.second] == 0 && data[idx][j][i] != 0){
                    data[idx][data_idx.first][data_idx.second] = data[idx][j][i];
                    data[idx][j][i] = 0;
                }
                else if(data[idx][data_idx.first][data_idx.second] != 0 && data[idx][j][i] != 0){
                    if(data[idx][data_idx.first][data_idx.second] == data[idx][j][i]){
                        data[idx][data_idx.first][data_idx.second] += data[idx][j][i];
                        data_idx.first -= 1;
                        data[idx][j][i] = 0;
                    }
                    else if(data[idx][data_idx.first][data_idx.second] != data[idx][j][i] && data_idx.first-1 != j){
                        data_idx.first -= 1;
                        data[idx][data_idx.first][data_idx.second] = data[idx][j][i];
                        data[idx][j][i] = 0;
                    }
                    else{
                        data_idx.first -= 1;
                    }
                }
            }
        }
    }
    else if(num == 3){
        for(int i=0;i<N;i++){
            data_idx.first = i;
            data_idx.second = 0;
            for(int j=1;j<N;j++){
                if(data[idx][data_idx.first][data_idx.second] == 0 && data[idx][i][j] != 0){
                    data[idx][data_idx.first][data_idx.second] = data[idx][i][j];
                    data[idx][i][j] = 0;
                    //cout << "a" << endl;
                }
                else if(data[idx][data_idx.first][data_idx.second] != 0 && data[idx][i][j] != 0){

                    if(data[idx][data_idx.first][data_idx.second] == data[idx][i][j]){
                        data[idx][data_idx.first][data_idx.second] += data[idx][i][j];
                        data_idx.second += 1;
                        data[idx][i][j] = 0;
                        //cout << "b" << endl;
                    }
                    else if(data[idx][data_idx.first][data_idx.second] != data[idx][i][j] && data_idx.second+1 != j){
                        data_idx.second += 1;
                        data[idx][data_idx.first][data_idx.second] = data[idx][i][j];
                        data[idx][i][j] = 0;
                        //cout << "c" << endl;
                    }
                    else{
                        data_idx.second += 1;
                        //cout << "d" << endl;
                    }
                }
            }
            
        }
    }
}

void max_search(int value){
    cout << "==============" << endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(data[value][i][j] > max_data){
                max_data = data[value][i][j];
            }
            cout << data[value][i][j] << " ";
        }
        cout << endl;
    }
    cout << "==============" << endl;
}

int main() {
    
    deque<deque<int> > arr(20,deque<int>(20));
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    
    data.push_back(arr);
    
    for(int i=0;i<5;i++){
        size = int(data.size());
        size2 = size;
        //cout << size << endl;
        for(int j=0;j<size;j++){
            for(int k=0;k<4;k++){
                data.push_back(data[j]);
                size2 += 1;
                search(size2-1,k);
            }
            data.pop_front();
            size2 -= 1;
        }
    }
    
    size = int(data.size());
    
    for(int i=0;i<size;i++){
        max_search(i);
    }
    
    cout << max_data << endl;
    
    return 0;
}
