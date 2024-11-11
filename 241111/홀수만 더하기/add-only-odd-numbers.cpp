#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%3==0 && k%2==1){
            sum+=k;
        }
    }

    cout<<sum;
    return 0;
}