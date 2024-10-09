#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[100];
    int* scoreCheck = new int[11];
    for (int i = 0; i < 11; i++)
    {
        scoreCheck[i] = 0;
    }
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        scoreCheck[arr[i] / 10]++;
    }
    for (int i = 10; i >= 1; i--)
    {
        cout << i * 10 << " - " << scoreCheck[i] << endl;
    }
    delete arr;
    delete scoreCheck;
    return 0;
}