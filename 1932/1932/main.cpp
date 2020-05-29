#include <iostream>

using namespace std;

int main() {
    
    int n=0;
    int star[500][500]={0,};
    int max_value[500][500]={0,};
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin >> star[i][j];
            if(i==n-1){
                max_value[0][j]=star[i][j];
            }
        }
    }
    
    if(n==1){
        cout << max_value[0][0] << endl;
    }
    else{
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(max_value[i-1][j]>=max_value[i-1][j+1]){
                    max_value[i][j]=max_value[i-1][j]+star[n-i-1][j];
                    //cout << star[n-i-1][j] << " + " << max_value[i-1][j] << " = " <<max_value[i][j] << endl;
                }
                else if(max_value[i-1][j]<=max_value[i-1][j+1]){
                    max_value[i][j]=max_value[i-1][j+1]+star[n-i-1][j];
                    //cout << star[n-i-1][j] << " + " << max_value[i-1][j+1] << " = " <<max_value[i][j] << endl;
                }
            }
            //cout << "====================" << endl;
        }
        cout << max_value[n-1][0] << endl;
    }
    
    
    return 0;
}
