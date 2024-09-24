#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    double a, b;
    cin >> c;
    cin >> a >> b;

    cout << c << '\n';
    cout << fixed;
    cout.precision(2);
    cout << a << '\n' << b;
    return 0;
}