#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char* arr;
    arr = new char[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int j = 9; j >= 0; j--)
    {
        cout << arr[j];
    }
    delete arr;
    return 0;
}