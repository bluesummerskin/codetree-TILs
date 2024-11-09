#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int month;
    cin>>month;

    if(month<3 || month>11){
        cout<<"Winter";
    }
    else if(month<6){
        cout<<"Spring";
    }
    else if(month<9){
        cout<<"Summer";
    }
    else{
        cout<<"Fall";
    }

    
    return 0;
}