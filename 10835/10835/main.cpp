#include <iostream>
#include <algorithm>

using namespace std;

int arr[2000][2000];
int right_arr[2000];
int left_arr[2000];

int sol(int l, int r){
    
    int res = 0;
    
    if(l==-1||r==-1){
        return 0;
    }
    
    res = max(sol(l-1,r-1), sol(l-1,r));
    
    if(l<r){
        res = max(res, sol(l,r-1) + right_arr[r]);
        cout << right_arr[r] << endl;
    }
    
    return res;
    
}

int main(){
    
    int N = 0, sum = 0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> left_arr[i];
    }
    
    for(int i=0;i<N;i++){
        cin >> right_arr[i];
    }
    
    sum = sol(N,N);
    
    cout << sum << endl;
    

    
    return 0;
}

