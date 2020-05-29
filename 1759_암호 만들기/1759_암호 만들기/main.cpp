#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char arr[16];
vector<char> arr2;
int L, C;

void dfs(int idx, bool check, int check2){
    
    if(arr2.size() == L){
        if(check2 > 1 && check == true){
            for(auto it : arr2){
                cout << it;
            }
            cout << "\n";
        }
        return ;
    }

    for(int i=idx+1;i<C;i++){
        
        arr2.push_back(arr[i]);
        
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            dfs(i,true,check2);
        }
        else if(check == true){
            dfs(i,true,check2+1);
        }
        else{
            dfs(i,false,check2+1);
        }
        
        arr2.pop_back();
    }
}

int main() {
    
    cin >> L >> C;
    
    for(int i=0;i<C;i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+C);

    dfs(-1,false,0);
    
    return 0;
}
