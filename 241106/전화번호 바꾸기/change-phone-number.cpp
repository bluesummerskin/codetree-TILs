#include <iostream>
#include <string>
using namespace std;

int main() {
    string phoneNum;
    getline(cin, phoneNum);  // 010-xxxx-yyyy 형식으로 입력받기
    
    // 첫 번째 '-'와 두 번째 '-'의 위치 찾기
    int firstDash = phoneNum.find('-');
    int secondDash = phoneNum.rfind('-');
    
    // 각 부분 추출하기
    string area = phoneNum.substr(0, firstDash);                    // 010
    string middle = phoneNum.substr(firstDash + 1, 4);             // xxxx
    string last = phoneNum.substr(secondDash + 1);                 // yyyy
    
    // 중간과 마지막 부분을 바꿔서 출력
    cout << area << "-" << last << "-" << middle;
    
    return 0;
}