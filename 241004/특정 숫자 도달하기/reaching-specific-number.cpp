#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    double avr;
    int cnt = 0;
    int* arr;
    arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] < 250 && i < 9)
        {
            sum += arr[i];
            cnt++;
        }
    }
    delete arr;
    avr = (double)sum / (double)cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avr;
    return 0;
}