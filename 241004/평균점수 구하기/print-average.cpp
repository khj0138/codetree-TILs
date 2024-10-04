#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double* arr;
    arr = new double[8];
    double sum = 0.0f;
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double avr = sum / 8.0f;

    cout << fixed;
    cout.precision(1);
    cout << avr;
    delete arr;
    return 0;
}