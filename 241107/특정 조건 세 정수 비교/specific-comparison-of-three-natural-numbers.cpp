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

    if(min==a){
        cout<<1<<" ";
    }
    else{
        cout<<0<<" ";
    }

    if(a==b && b==c){
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}