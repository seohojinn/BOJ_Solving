#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    string data;
    vector<char> a, b, c;
    char sex;
    
    cin >> data;
    
    if(data[7] == '1'){
        sex = 'M';
        a.push_back('1');
        a.push_back('9');
    }
    else if(data[7] == '2'){
        sex = 'F';
        a.push_back('1');
        a.push_back('9');
    }
    else if(data[7] == '3'){
        sex = 'M';
        a.push_back('2');
        a.push_back('0');
    }
    else{
        sex = 'F';
        a.push_back('2');
        a.push_back('0');
    }
    
    a.push_back(data[0]);
    a.push_back(data[1]);
    
    b.push_back(data[2]);
    b.push_back(data[3]);

    c.push_back(data[4]);
    c.push_back(data[5]);
    
    for(auto it : a){
        cout << it;
    }
    cout << "/";
    
    for(auto it : b){
        cout << it;
    }
    cout << "/";
    
    for(auto it : c){
        cout << it;
    }
    cout << " ";
    cout << sex << "\n";
    
    return 0;
}
