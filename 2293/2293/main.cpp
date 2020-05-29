#include <iostream>
#include <deque>

using namespace std;

int main(){
    
    int n=0,k=0,value=0;
    int arr[10000]={0,};
    deque <int> dp;
    
    cin >> n >> k;
    cout << endl;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
        dp.push_back(arr[i]);
    }
    
    while(!dp.empty()){
        if(dp.front()==k){
            value++;
        }
        else{
            for(int i=0;i<n;i++){
                if(dp.front()+arr[i]<=k){
                    dp.push_back(dp.front()+arr[i]);
                    cout << dp.back() << endl;
                }
            }
        }
        
        dp.pop_front();
    }
    

    cout << value << endl;
    
    return 0;
}
