#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(b>c)
            cout<<b;
        else if(b<c){
            if(a<c)
                cout<<a;
            else    
                cout<<c;
        }
    }
    else if(a<b){
        if(b>c){
            if(c>a)
                cout<<c;
            else
                cout<<a;
        }
        else if(b<c)
            cout<<b;
    }

    return 0;
}