#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int eng01, mat01;
    int eng02, mat02;

    cin>>mat01>>eng01;
    cin>>mat02>>eng02;

    if(mat01>mat02){
        cout<<"A";
    }
    else if(mat01<mat02){
        cout<<"B";
    }
    else{
        if(eng01>eng02)
            cout<<"A";
        else{
            cout<<"B";
        }
    }
    return 0;
}