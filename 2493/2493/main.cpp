#include <iostream>
#include <deque>
#include <stack>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    
    deque<int> data;
    deque<int> arr;
    int value[500000]={0,};
    int N=0, input_data=0;
    int idx=0,idx2=0;
    
    cin >> N;
    idx=N;
    idx2=N-1;
    
    for(int i=0;i<N;i++){
        cin >> input_data;
        arr.push_back(input_data);
    }
    
    data.push_back(arr.back());
    arr.pop_back();
    
    for(int i=N-2;i>=0;i--){
        data.push_back(arr.back());
        arr.pop_back();
        idx-=1;
        if(data.front()<=data.back()){
            value[idx2]=idx;
            data.pop_front();
            idx2-=1;
        }
    }
    
    for(int i=0;i<N;i++){
        cout << value[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
