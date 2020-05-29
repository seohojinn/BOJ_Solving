#include <iostream>
#include <utility>
#include <deque>
#include <algorithm>

using namespace std;
typedef pair<int,pair<int,int> > Pair;

int main() {
    
    deque<Pair> arr;
    int value[200000]={0,};
    int N=0,color=0,size=0;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> color >> size;
        arr.push_back(make_pair(size,make_pair(color,i)));
    }
    
    sort(arr.begin(),arr.end());
    
    
    for(int i=N-1;i>0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i].second.first != arr[j].second.first){
                value[arr[i].second.second] += arr[j].first;
            }
        }
    }
   
    
    for(int i=0;i<N;i++){
        cout << value[i] << endl;
    }
    
    return 0;
}
