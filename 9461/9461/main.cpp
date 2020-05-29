#include <iostream>

using namespace std;

int main() {
    
    unsigned long long arr[100]={1,1,1,2,2,};
    int idx1=0,idx2=4;
    int T=0,N=0;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> N;
        idx1=0;
        idx2=4;
        for(int i=5;i<N;i++){
            arr[i]=arr[idx1]+arr[idx2];
            idx1+=1;
            idx2+=1;
        }
        cout << arr[N-1] << endl;
        for(int i=5;i<100;i++){
            arr[i]=0;
        }
    }
    
    return 0;
}
