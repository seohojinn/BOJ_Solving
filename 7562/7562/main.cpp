#include <iostream>
#include <utility>
#include <queue>

using namespace std;
typedef pair<int,pair<int,int> > Pair;

int main() {
    
    queue<Pair> arr;
    char map[300][300] = {0,};
    int T = 0, l = 0;
    int a = 0, b = 0, c = 0, d = 0;
    int first = 0, second = 0, value = 0;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        cin >> l;
        cin >> a >> b;
        cin >> c >> d;
        arr.push({0,{a,b}});
        map[a][b] = '1';
        while(arr.back().second.first != c || arr.back().second.second != d){
            first = arr.front().second.first;
            second = arr.front().second.second;
            value = arr.front().first;
            cout << first << " " << second << endl;
            if(second != 0 && first > 1 && map[first-2][second-1] != '1'){
                map[first-2][second-1] = '1';
                arr.push({value+1,{first-2,second-1}});
            }
            if(second != l-1 && first > 1 && map[first-2][second+1] != '1'){
                map[first-2][second+1] = '1';
                arr.push({value+1,{first-2,second+1}});
            }
            if(second != 0 && first < l-2 && map[first+2][second-1] != '1'){
                map[first+2][second-1] = '1';
                arr.push({value+1,{first+2,second-1}});
            }
            if(second != l-1 && first < l-2 && map[first+2][second+1] != '1'){
                map[first+2][second+1] = '1';
                arr.push({value+1,{first+2,second+1}});
            }
            arr.pop();
        }
        cout << arr.back().first << endl;
        while(!arr.empty()){
            arr.pop();
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                map[i][j] = '0';
            }
        }
        
    }
    
    
    
    return 0;
}
