#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int arr[8]={0,};
    vector <int> value;
    int sum=0;
    int max=INT_MIN;
    int max_idx=0;
    
    for(int i=0;i<8;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++){
            if(max<arr[j]){
                max=arr[j];
                max_idx=j;
            }
        }
        sum+=max;
        value.push_back(max_idx);
        arr[max_idx]=INT_MIN;
        max=INT_MIN;
    }
    
    cout << sum << endl;
    
    sort(value.begin(),value.end());
    
    for(auto it : value ){
        cout << it+1 << " ";
    }
    cout << endl;
    
    return 0;
}
