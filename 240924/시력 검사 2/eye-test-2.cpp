#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a;
    cin >> a;
    cout << (a >= 1.0f ? "High" : (a >= 0.5f ? "Middle" : "Low"));
    return 0;
}