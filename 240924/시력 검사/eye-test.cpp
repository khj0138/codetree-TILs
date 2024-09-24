#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double lEyes, rEyes;
    cin >> lEyes >> rEyes;
    if (lEyes >= 1.0f && rEyes >= 1.0f)
    {
        cout << "High";
    }
    else if (lEyes >= 0.5f && rEyes >= 0.5f)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }
    return 0;
}