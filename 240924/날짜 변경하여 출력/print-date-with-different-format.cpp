#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int yyyy, mm, dd;
    char c;
    cin >> yyyy >> c >> mm >> c >> dd;
    c = '-';
    cout << mm << c << dd << c << yyyy;
    return 0;
}