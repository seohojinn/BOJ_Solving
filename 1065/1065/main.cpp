#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    deque <int> X;
    int N=0, data=0;
    int count=99;
    int tolerance=0;
    
    
    cin >> N;
    
    if(N<100){
        cout << N << endl;
    }
    
    else{
        for(int i=100;i<=N;i++){
            data=i;
            while(data){
                X.push_back(data%10);
                data=data/10;
            }
            tolerance=X[0]-X[1];
//            if(i==123 || i==321){
//                cout << X[0] << " " << X[1] << " " << X[0]-X[1] << endl;
//                cout << "tol " << tolerance << endl;
//            }
            for(int j=0;j<X.size()-1;j++){
                if(tolerance!=X[j]-X[j+1]){
                    break;
                }
                else if(j==X.size()-2){
                    count+=1;
                }
            }
            X.clear();
        }
        cout << count << endl;
    }
    
    return 0;
}
