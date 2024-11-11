#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(i%2==0){
            cout<<i<<" ";
            i+=2;
        }
        else{
            cout<<i<<" ";
            i*=2;
            i-=1;
        }
    }
    
    return 0;
}