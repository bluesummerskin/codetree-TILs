#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int cnt=0;

    for(int i=1;i<=7;i++){
        cnt++;
        n/=i;
        if(n<=1){
            break;
        }
    }

    cout<<cnt;

    return 0;
}