#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char check[100]="CAMBRIDGE";
    char data[101]={0,};
    char data2[101]={0,};
    int idx=0,len=0;
    
    
    cin >> data;
    len=strlen(data);
    
    for(int i=0;i<len;i++){
        for(int j=0;j<9;j++){
            if(data[i]==check[j]){
                break;
            }
            else if(j==8){
                data2[idx]=data[i];
                idx++;
            }
        }
    }
    cout << data2 << endl;
    
    return 0;
}
