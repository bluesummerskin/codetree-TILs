#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1,n2;
    string s1,s2;

    cin>>n1>>s1;
    cin>>n2>>s2;

    if((n1>=19 || n2>=19) && (s1=="M" || s2=="M")){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}