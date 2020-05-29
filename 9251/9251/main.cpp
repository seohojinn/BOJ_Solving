#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    char arr[1001] = {0,};
    char arr2[1001] = {0,};
    int dp[1000] = {0,};
    int size = 0, size2 = 0,max_value = 0;
    
    cin >> arr;
    cin >> arr2;
    
    size = int(strlen(arr));
    size2 = int(strlen(arr2));
    
    for(int i=0;i<size;i++){
        max_value = 0;
        for(int j=0;j<size2;j++){
            if(max_value < dp[j]){
                max_value = dp[j];
            }
            else if(arr[i] == arr2[j]){
                dp[j] = max_value + 1;
            }
        }
    }
    
    cout << *max_element(dp,dp+max(size,size2)) << "\n";
    
    
    return 0;
}
