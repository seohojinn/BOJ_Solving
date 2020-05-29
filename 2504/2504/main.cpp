#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    
    char data[31]={0,};
    int mul_idx[30]={0,};
    vector<char> str_data;
    int value=0,len=0,idx=0;
    
    cin >> data;
    len=strlen(data);
    
    for(int i=0;i<len;i++){
        if(data[i]=='('){
            if(str_data.back()=='('){
                mul_idx[idx]=mul_idx[idx]*2;
            }
            else if(str_data.back()=='['){
                mul_idx[idx]=mul_idx[idx]*3;
            }
            else{
                str_data.push_back('(');
                mul_idx[idx]=2;
                idx++;
            }
        }
        else if(data[i]=='['){
            if(str_data.back()=='('){
                mul_idx[idx]=mul_idx[idx]*2;
            }
            else if(str_data.back()=='['){
                mul_idx[idx]=mul_idx[idx]*3;
            }
            else{
                str_data.push_back('[');
                mul_idx[idx]=3;
                idx++;
            }
        }
        else if(data[i]==')'){
            if(str_data.back()=='['){
                cout << 0 << endl;
                return 0;
            }
            else{
                str_data.pop_back();
            }
        }
        
        
    }
    
    
    
    return 0;
}
