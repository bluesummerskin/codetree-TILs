#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score1;
    int score2;
    cin>>score1>>score2;

    if(score1<90){
        cout<<0;
    }
    else{
        if(score2>=95){
            cout<<10'0000;
        }
        else if(score2>=90){
            cout<<5'0000;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}