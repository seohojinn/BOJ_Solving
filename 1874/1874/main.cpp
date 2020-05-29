#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int>stack;
    vector<char> log;
    deque<int> arr;
    int n = 0, data = 0, front = 0, i = 1, tmp = 0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> data;
        arr.push_back(data);
    }
    
    while(!arr.empty()){
        
        front = arr.front();
        tmp = i;
        if(i <= front){
            for(i=tmp;i<=front;i++){
                stack.push_back(i);
                log.push_back('+');
            }
        }

        if(stack.back() == arr.front()){
            arr.pop_front();
            stack.pop_back();
            log.push_back('-');
        }
        else{
            cout << "NO" << "\n";
            return 0;
        }
    }
    
    
    for(auto it : log){
        cout << it << "\n";
    }
    
    return 0;
}
