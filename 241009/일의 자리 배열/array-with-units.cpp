#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[10];
    cin >> arr[0];
    cout << arr[0] << ' ';
    cin >> arr[1];
    cout << arr[1] << ' ';
    for (int i = 0; i < 8; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
        cout << arr[i + 2] % 10 << ' ';
    }
    delete arr;
    return 0;
}