#include <iostream>
using namespace std;

bool has_369(int num) {
    while (num > 0) {
        int digit = num % 10;  // 각 자릿수 추출
        if (digit == 3 || digit == 6 || digit == 9) {
            return true;
        }
        num /= 10;
    }
    return false;
}

void print_369_game(int n) {
    for (int i = 1; i <= n; i++) {
        // 3의 배수이거나 3,6,9를 포함하는지 확인
        if (i % 3 == 0 || has_369(i)) {
            cout << "0";
        } else {
            cout << i;
        }
        
        // 마지막 숫자가 아니면 공백 출력
        if (i < n) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    print_369_game(n);
    
    return 0;
}