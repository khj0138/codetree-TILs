#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[100];
    int cnt = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            break;
        }
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << arr[i] / 2 << ' ';
        }
        else
        {
            cout << arr[i] + 3 << ' ';
        }
    }
    
    delete arr;
    return 0;
}