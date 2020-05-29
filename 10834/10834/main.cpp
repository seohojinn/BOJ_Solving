#include <iostream>

using namespace std;

class Wheel{
    public:
        int data;
        int data2;
        int data3;
        Wheel(){
            data = 0;
            data2 = 0;
            data3 = 0;
        }
};

int main() {
    
    Wheel arr[1000];
    int M = 0, count = 1, bit = 0;
    
    cin >> M;
    
    for(int i=0;i<M;i++){
        cin >> arr[i].data >> arr[i].data2 >> arr[i].data3;
        
        count = (count / arr[i].data) * arr[i].data2;
        if(arr[i].data3 == 1){
            if(bit == 0){
                bit = 1;
            }
            else if(bit == 1){
                bit = 0;
            }
        }
    }
    
    cout << bit << " " << count << endl;
    
    
    return 0;
}
