#include <iostream>
#include <list>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    list<char> arr;
    list<char> :: iterator iter, iter2;
    char data[1000001] = {0,};
    int T = 0, size = 0;

    cin >> T;

    for(int i=0;i<T;i++){

        cin >> data;

        size = int(strlen(data));
        arr.clear();
        arr.push_back(' ');
        arr.push_back(' ');
        iter = arr.begin();

        for(int j=0;j<size;j++){
            if(data[j] != '>' && data[j] != '<' && data[j] != '-'){
                arr.insert(iter,data[j]);
                iter2 = iter;
                iter2--;
                swap(*iter,*iter2);
            }
            iter2 = iter;
            iter2 ++;
            if(data[j] == '<' && *iter != ' '){
                iter --;
            }
            else if(data[j] == '>' && *iter2 != ' '){
                iter ++;
            }
            else if(data[j] == '-' && *iter != ' '){
//                cout << *iter << endl;
//                for(auto it : arr){
//                    cout << it;
//                }
//                cout << "\n";
                arr.erase(iter);
                iter --;
            }

        }
        arr.pop_front();
        for(auto it : arr){
            cout << it;
        }
        cout << "\n";

    }

    return 0;
}
