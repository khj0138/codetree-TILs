#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double n;
    cin >> n;
    double fitToCm = n * 30.48f;
    cout << fixed;
    cout.precision(1);
    cout << fitToCm;
    return 0;
}