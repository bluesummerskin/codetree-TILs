#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    cin>>a>>n;

    int sum = a+n;
    cout<<sum<<endl;

    for(int i=0;i<n-1;i++){
        sum+=n;
        cout<<sum<<endl;
    }

    
    return 0;
}