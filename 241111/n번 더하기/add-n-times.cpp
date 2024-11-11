#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    cin>>a>>n;

    int k=n;
    cout<<a+n<<endl;

    for(int i=0;i<n-1;i++){
       n+=k;
       cout<<a+n<<endl;
    }
    return 0;
}