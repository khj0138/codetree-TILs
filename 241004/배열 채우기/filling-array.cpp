#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr;
    arr = new int[10];
    int cnt = 9;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            cnt = i - 1;
            break;
        }
    }
    for (int i = cnt; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }
    delete arr;
    return 0;
}