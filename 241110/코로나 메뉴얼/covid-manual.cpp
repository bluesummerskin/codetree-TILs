#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1,c2,c3;
    int n1,n2,n3;
    int count = 0;

    cin>>c1>>n1;
    cin>>c2>>n2;
    cin>>c3>>n3;

    if(c1=='Y' || c2=='Y' || c3=='Y'){
        if(c1=='Y' && n1>=37)
            count++;
        if(c2=='Y' && n2>=37)
            count++;
        if(c3=='Y' && n3>=37)
            count++;
    }

    if(count>=2)
        cout<<'E';
    else
        cout<<'N';
        
    return 0;
}