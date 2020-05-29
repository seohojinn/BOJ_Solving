#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    int N=0;
    int min=INT_MAX;
    int min_idx=0;
    int arr[1000001]={0,};
    
    cin >> N;
    
    for(int i=2;i<=N;i++){
        if(arr[i-1]<min){
            min=arr[i-1];
            min_idx=i-1;
            
        }
        if(i%2==0 && arr[i/2]<min){
            min=arr[i/2];
            min_idx=i/2;
            
        }
        if(i%3==0 && arr[i/3]<min){
            min=arr[i/3];
            min_idx=i/3;
            
        }
        arr[i]=arr[min_idx]+1;
        min=INT_MAX;

    }
    
    cout << arr[N] << endl;
    
    return 0;
}
