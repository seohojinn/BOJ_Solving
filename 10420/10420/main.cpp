#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int N = 0;
    int Y = 2014, M = 4, D = 1;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        
        D += 1;
        if((M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) && D == 32){
            M += 1;
            D = 1;
        }
        else if((M == 4 || M == 6 || M == 9 || M == 11) && D == 31){
            M += 1;
            D = 1;
        }
        else if(M == 2){
            if(Y % 4 == 0 && (Y % 100 != 0 || Y % 400 == 0) && D == 30){
                M += 1;
                D = 1;
               
            }
            else if(Y % 4 != 0  && D == 29){
                M += 1;
                D = 1;
                
            }
        }
        
        if(M == 13){
            M = 1;
            Y += 1;
        }
        
    }
    
    cout << Y << "-";
    if(M / 10 == 0){
        cout << 0 << M << "-";
    }
    else{
        cout << M << "-";
    }
    if(D / 10 == 0){
        cout << 0 << D;
    }
    else{
        cout << D;
    }
    
    cout << "\n";
    
    return 0;
}
