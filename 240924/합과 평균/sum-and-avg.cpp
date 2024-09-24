#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    double average = sum / 2.f;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << average;
    return 0;
}