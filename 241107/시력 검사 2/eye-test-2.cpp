#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double sight;
    cin>>sight;

    if(sight>=1.0){
        cout<<"High";
    }
    else if(sight>=0.5){
        cout<<"Middle";
    }
    else{
        cout<<"Low";
    }

    return 0;
}