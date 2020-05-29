//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//typedef struct _Data{
//    int digit;
//    int count;
//    int remainder;
//}Data;
//
//Data cal(int data){
//
//    Data return_data;
//    int count = 1;
//    int tmp = data;
//    memset(&return_data,0,sizeof(Data));
//
//    while(data > 9){
//
//        count *= 10;
//        return_data.digit += 1;
//        data /= 10;
//    }
//    count = count * data;
//    return_data.count = data;
//    return_data.remainder = tmp - count;
//
//    return return_data;
//
//}
//
//int main() {
//
//    int a = 0, b = 0;
//    int value1 = 0, value2 = 0;
//    Data data1, data2;
//
//    cin >> a >> b;
//
//    data1 = cal(a);
//    data2 = cal(b);
//
//    cout << data1.digit << " " << data1.count << " " <<data1.remainder << endl;
//    cout << data2.digit << " " << data2.count << " " <<data2.remainder << endl;
//
//    while(data1.remainder != 0 ){
//        data1 = cal(a);
//        for(int i=1;i<=data1.count;i++){
//
//        }
//    }
//
//    return 0;
//}

#include <iostream>

using namespace std;

int main(){
    
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    
    if(a > b && d > c && a > c && d > b ){
        cout << "cross" << endl;
    }
    
    else if(a > b && c > d && a > d && c > b ){
        cout << "cross" << endl;
    }
    
    else if(b > a && c > d && c > a && b > d){
        cout << "cross" << endl;
    }
    
    else if(b > a && d > c && b > c && d > a ){
        cout << "cross" << endl;
    }
    
    else{
        cout << "not cross" << endl;
    }
    
    return 0;
}
