#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int data[10000]={0,};
    int own_jump[10000]={0,};
    int two_jump[10000]={0,};
    
    int n=0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> data[i];
    }
    own_jump[0]=data[0];
    two_jump[0]=0;
    
    for(int i=1;i<n;i++){
        if(i==1){
            own_jump[i]=data[i]+own_jump[i-1];
            two_jump[i]=data[i];
        }
        else{
            if(data[i]+two_jump[i-1]>=own_jump[i-1]){
                own_jump[i]=data[i]+two_jump[i-1];
            }
            else{
                own_jump[i]=own_jump[i-1];
            }
    
            two_jump[i]=max(data[i]+two_jump[i-2],data[i]+own_jump[i-2]);
        }
    }
    
    cout << max(own_jump[n-1],two_jump[n-1]) << endl;
    
    
    return 0;
}
