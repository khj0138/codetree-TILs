#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float weight = 13.f;
    float gravity = 0.165f;
    cout << fixed;
    cout.precision(0);
    cout << weight;
    cout.precision(6);
    cout << " * " << gravity << " = " << weight * gravity;
    return 0;
}