#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] * arr[i] << ' ';
    }
    delete arr;
    return 0;
}