#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N=0;
    int stairs[300]={0,};
    int own_jump[300]={0,};
    int two_jump[300]={0,};
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> stairs[i];
    }
    
    own_jump[0]=stairs[0];
    two_jump[0]=0;
    
    for(int i=1;i<N;i++){
        if(i==1){
            own_jump[i]=stairs[i]+own_jump[i-1];
            two_jump[i]=stairs[i];
        }
        else{
            own_jump[i]=stairs[i]+two_jump[i-1];
            two_jump[i]=stairs[i]+max(own_jump[i-2],two_jump[i-2]);
        }
    }
    
    cout << max(own_jump[N-1],two_jump[N-1]) << endl;
    
    return 0;
}
