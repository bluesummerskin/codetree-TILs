#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum=0;
    int cnt=0;

    for(int i=0;i<10;i++){
        int k;
        cin>>k;
        if(k>=0 && k<=200){
            sum+=k;
            cnt++;
        }
    }

    cout<<sum<<" ";
    cout<<fixed<<setprecision(1)<<(double)sum/cnt;
    return 0;
}