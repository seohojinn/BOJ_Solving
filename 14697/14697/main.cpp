#include <iostream>
#include <deque>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    
    int A = 0, B = 0, C = 0, N = 0;
    deque<int> data, data2, data3;
    int a = 0, b = 0, c = 0;
    int size = 0, size2 = 0, size3 = 0;
    
    cin >> A >> B >> C >> N;
    a = A;
    b = B;
    c = C;
    
    if(N % A == 0 || N % B == 0 || N % C == 0){
        cout << 1 << "\n";
        return 0;
    }
    
    while(a < N){
        data.push_back(a);
        a += A;
    }
    while(b < N){
        data2.push_back(b);
        b += B;
    }
    while(c < N){
        data3.push_back(c);
        c += C;
    }
    
    size = int(data.size());
    size2 = int(data2.size());
    size3 = int(data3.size());
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size2;j++){
            if(data[i] + data2[j] == N){
                //cout << data[i] << " " << data2[j] << endl;
                cout << 1 << "\n";
                return 0;
            }
        }
    }
    
    for(int i=0;i<size2;i++){
        for(int j=0;j<size3;j++){
            if(data2[i] + data3[j] == N){
                //cout << data2[i] << " " << data3[j] << endl;
                cout << 1 << "\n";
                return 0;
            }
        }
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size3;j++){
            if(data[i] + data3[j] == N){
                //cout << data[i] << " " << data3[j] << endl;
                cout << 1 << "\n";
                return 0;
            }
        }
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size2;j++){
            for(int k=0;k<size3;k++){
                if(data[i] + data2[j] + data3[k] == N){
                    //cout << data[i] << " " << data2[j] << " " << data3[k] << endl;
                    cout << 1 << "\n";
                    return 0;
                }
            }
        }
    }
    
    cout << 0 << "\n";
    
    return 0;
}
