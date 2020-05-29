#include <iostream>
#include <utility>

using namespace std;

int main() {
    
    int N = 0 , T = 0;
    pair<int,int> a , b , tmp;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> N;
        a.first = 1;
        a.second = 0;
        b.first = 0;
        b.second = 1;
        if(N == 0){
            cout << a.first << " " << a.second << endl;
        }
        else if(N == 1){
            cout << b.first << " " << b.second << endl;
        }
        else{
            for(int j=2;j<=N;j++){
                tmp = b;
                b.first = b.first + a.first;
                b.second = b.second + a.second;
                a = tmp;
            }
            cout << b.first << " " << b.second << endl;
        }
        
    }
    
    return 0;
}
