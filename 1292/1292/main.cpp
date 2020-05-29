#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int A = 0, B = 0,count = 1, count2 = 0, sum = 0;
    int arr[1000] = {0,};
    
    cin >> A >> B;
    
    for(int i=0;i<B;i++){
        arr[i] += count;
        count2 += 1;
        if(count2 == count){
            count += 1;
            count2 = 0;
        }
    }
    
    for(int i=A-1;i<B;i++){
        sum += arr[i];
    }
    
    cout << sum << "\n";
    
    return 0;
}
