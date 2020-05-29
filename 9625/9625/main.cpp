#include <iostream>

using namespace std;

void tmp(int & A_amount,int & B_amount){
    int c=A_amount;
    A_amount=B_amount;
    B_amount=c;
}

int main() {
    
    int K=0;
    int A_amount=1;
    int B_amount=0;
    
    cin >> K;
    
    for(int i=0;i<K;i++){
        if(B_amount==0){
            B_amount=A_amount;
            A_amount=0;
        }
        else{
            A_amount+=B_amount;
            tmp(A_amount,B_amount);
        }
    }
    
    cout << A_amount << " " << B_amount << endl;
    
    return 0;
}
