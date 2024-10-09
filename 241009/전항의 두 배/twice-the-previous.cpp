#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[10];
    cin >> arr[0] >> arr[1];
    for (int i = 0; i < 8; i++)
    {
        arr[i + 2] = arr[i] * 2 + arr[i + 1];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}