#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double sum=0;
    int count=0;
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            count++;
        }
    }
    double average = sum/count;
    cout<<sum<<" ";
    cout<<fixed<<setprecision(1)<<average;


    return 0;
}