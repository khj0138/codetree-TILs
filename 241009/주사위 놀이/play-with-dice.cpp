#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[7];
    for (int i = 1; i <= 6; i++)
    {
        arr[i] = 0;
    }
    int num;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        arr[num]++;
    }
    for (int i = 1; i <= 6; i++)
    {
        cout << i << " - " << arr[i] << endl;
    }
    delete arr;
    return 0;
}