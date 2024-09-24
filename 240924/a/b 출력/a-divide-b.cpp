#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a, b;
    cin >> a >> b;
    double c = a / b;
    cout << fixed;
    cout.precision(1);
    cout << c;
    c *= 10.f;

    int num = 0;
    for (int i = 1; i < 20; i++)
    {
        c *= 10.f;
        num = c;
        c -= num;
        cout << num % 10;
    }
    return 0;
}