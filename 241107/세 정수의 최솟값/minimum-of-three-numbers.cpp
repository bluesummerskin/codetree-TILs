#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;

    int min=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }

    cout<<min;
    return 0;
}