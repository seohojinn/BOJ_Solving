#include <iostream>

using namespace std;

int main() {
    
    int arr[9]={0,};
    int sum=0;
    
    for(int i=0;i<9;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                if(k!=i && k!=j && i!=j){
                    sum+=arr[k];
                }
            }
            if(sum==100){
                for(int k=0;k<9;k++){
                    if(k!=i && k!=j && i!=j){
                        cout << arr[k] << endl;
                    }
                }
                return 0;
            }
            sum=0;
        }
    }
    
    return 0;
}
