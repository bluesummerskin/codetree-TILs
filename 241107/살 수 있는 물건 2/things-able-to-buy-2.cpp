#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    cin>>score;

    if(score>=3000){
        cout<<"book";
    }
    else if(score>=1000){
        cout<<"mask";
    }
    else if(score>=500){
        cout<<"pen";
    }
    else{
        cout<<"no";
    }
    return 0;
}