#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[10];
    int sum = 0;
    double avr = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= 9; i += 2)
    {
        sum += arr[i];
    }
    for (int i = 2;  i <= 8; i += 3)
    {
        avr += (double)arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avr / 3.0f;
    delete arr;
    return 0;
}