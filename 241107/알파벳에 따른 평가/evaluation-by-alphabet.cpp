#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char word;
    cin>>word;

    if(word=='S')
        cout<<"Superior";
    else if(word=='A')
        cout<<"Excellent";
    else if(word=='B')
        cout<<"Good";
    else if(word=='C')
        cout<<"Usually";
    else if(word=='D')
        cout<<"Effort";
    else{
        cout<<"Failure";
    }
    return 0;
}