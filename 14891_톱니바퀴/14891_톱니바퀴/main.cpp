#include <iostream>
#include <deque>
#include <string>

using namespace std;

deque<int> arr, arr2, arr3, arr4;

void func1(int direction){

    if(direction == 1){ 
        
        arr.push_front(arr.back());
        arr.pop_back();
        
        if(arr[3] != arr2[6]){
            arr2.push_back(arr2.front());
            arr2.pop_front();
        }
        else{
            return ;
        }
        
        if(arr2[1] != arr3[6]){
            arr3.push_front(arr3.back());
            arr3.pop_back();
        }
        else{
            return ;
        }
        if(arr3[3] != arr4[6]){
            arr4.push_back(arr4.front());
            arr4.pop_front();
        }
    }
    else{
        arr.push_back(arr.front());
        arr.pop_front();
        
        if(arr[1] != arr2[6]){
            arr2.push_front(arr2.back());
            arr2.pop_back();
        }
        else{
            return ;
        }
        
        if(arr2[3] != arr3[6]){
            arr3.push_back(arr3.front());
            arr3.pop_front();
        }
        else{
            return ;
        }
        
        if(arr3[1] != arr4[6]){
            arr4.push_front(arr4.back());
            arr4.pop_back();
        }
    }
}

void func2(int direction){
    if(direction == 1){
        arr2.push_front(arr2.back());
        arr2.pop_back();
        
        if(arr[2] != arr2[7]){
            arr.push_back(arr.front());
            arr.pop_front();
        }
        
        if(arr2[3] != arr3[6]){
            arr3.push_back(arr3.front());
            arr3.pop_front();
        }
        else{
            return ;
        }
        
        if(arr3[1] != arr4[6]){
            arr4.push_front(arr4.back());
            arr4.pop_back();
        }
    }
    
    else{
        arr2.push_back(arr2.front());
        arr2.pop_front();
        
        if(arr[2] != arr2[5]){
            arr.push_front(arr.back());
            arr.pop_back();
        }
        
        if(arr2[1] != arr3[6]){
            arr3.push_front(arr3.back());
            arr3.pop_back();
        }
        else{
            return ;
        }
        
        if(arr3[3] != arr4[6]){
            arr4.push_back(arr4.front());
            arr4.pop_front();
        }
    }
}

void func3(int direction){
    
    if(direction == 1){
        arr3.push_front(arr3.back());
        arr3.pop_back();
        
        if(arr3[3] != arr4[6]){
            arr4.push_back(arr4.front());
            arr4.pop_front();
        }
        
        if(arr2[2] != arr3[7]){
            arr2.push_back(arr2.front());
            arr2.pop_front();
        }
        else{
            return ;
        }
        
        if(arr[2] != arr2[5]){
            arr.push_front(arr.back());
            arr.pop_back();
        }
    }
    
    else{
        arr3.push_back(arr3.front());
        arr3.pop_front();
        
        if(arr3[1] != arr4[6]){
            arr4.push_front(arr4.back());
            arr4.pop_back();
        }
        
        if(arr2[2] != arr3[5]){
            arr2.push_front(arr2.back());
            arr2.pop_back();
        }
        else{
            return ;
        }
        
        if(arr[2] != arr2[7]){
            arr.push_back(arr.front());
            arr.pop_front();
        }
    }
}

void func4(int direction){
    
    if(direction == 1){
        arr4.push_front(arr4.back());
        arr4.pop_back();
        
        if(arr3[2] != arr4[7]){
            arr3.push_back(arr3.front());
            arr3.pop_front();
        }
        else{
            return ;
        }
        
        if(arr2[2] != arr3[5]){
            arr2.push_front(arr2.back());
            arr2.pop_back();
        }
        else{
            return ;
        }
        
        if(arr[2] != arr2[7]){
            arr.push_back(arr.front());
            arr.pop_front();
        }
    }
    
    else{
        arr4.push_back(arr4.front());
        arr4.pop_front();
        
        if(arr3[2] != arr4[5]){
            arr3.push_front(arr3.back());
            arr3.pop_back();
        }
        else{
            return ;
        }
        
        if(arr2[2] != arr3[7]){
            arr2.push_back(arr2.front());
            arr2.pop_front();
        }
        else{
            return ;
        }
        
        if(arr[2] != arr2[5]){
            arr.push_front(arr.back());
            arr.pop_back();
        }
    }
}

int main() {
    
    int N = 0, num = 0, direction = 0, sum = 0;
    string input_data;

    cin >> input_data;
    
    for(auto it : input_data){
        arr.push_back(it-'0');
    }
    
    cin >> input_data;
    
    for(auto it : input_data){
        arr2.push_back(it-'0');
    }
    
    cin >> input_data;
    
    for(auto it : input_data){
        arr3.push_back(it-'0');
    }
    
    cin >> input_data;
    
    for(auto it : input_data){
        arr4.push_back(it-'0');
    }
    
    cin >> N;

    for(int i=0;i<N;i++){
        
        cin >> num >> direction;

        if(num == 1){
            func1(direction);
        }
        else if(num == 2){
            func2(direction);
        }
        else if(num == 3){
            func3(direction);
        }
        else if(num == 4){
            func4(direction);
        }
    }

    if(arr.front() == 1){
        sum += 1;
    }
    if(arr2.front() == 1){
        sum += 2;
    }
    if(arr3.front() == 1){
        sum += 4;
    }
    if(arr4.front() == 1){
        sum += 8;
    }

    cout << sum << "\n";
    
    
    return 0;
}
