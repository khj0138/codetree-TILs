#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float fit = 9.2f;
    float fitToCm = fit * 30.48f;
    float mile = 1.3f;
    float mileToCm = mile * 160934.f;
    cout << fixed;
    cout.precision(1);
    cout << fit << "ft = " << fitToCm << "cm\n";
    cout << mile << "mi = " << mileToCm << "cm\n";
    return 0;
}