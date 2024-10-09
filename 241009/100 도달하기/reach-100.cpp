#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[100];
    int n;
    cin >> n;
    arr[0] = n;
    arr[1] = 1;
    for (int i = 0; i < 98; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
        cout << arr[i + 2] << ' ';
        if(arr[i + 2] > 100)
        {
            break;
        }
    }
    delete arr;
    return 0;
}