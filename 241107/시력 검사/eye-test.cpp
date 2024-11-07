#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a1,a2;
    cin>>a1>>a2;

    if(a1>=1.0 && a2>=1.0){
        cout<<"High";
    }
    else if(a1>=0.5 && a2>=0.5){
        cout<<"Middle";
    }
    else{
        cout<<"Low";
    }
    return 0;
}