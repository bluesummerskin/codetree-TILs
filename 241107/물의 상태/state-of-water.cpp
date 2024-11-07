#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int tmp;
    cin>>tmp;

    if(tmp<0){
        cout<<"ice"<<endl;
    }
    else if(tmp>=100){
        cout<<"vapor"<<endl;
    }
    else{
        cout<<"water"<<endl;
    }
    
    return 0;
}