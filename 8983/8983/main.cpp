#include <iostream>
#include <vector>
#include <utility>
#include <list>

using namespace std;
typedef pair<int,int> Pair;

int main() {
    
    ios::sync_with_stdio(false);
    list<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(41);
    
    for(auto it : arr){
        if(it == 3){
            arr.erase(it);
        }
    }
    
    
    
    
    
    return 0;
}
