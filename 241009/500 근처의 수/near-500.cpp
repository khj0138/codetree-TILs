#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int* arr = new int[10];

    int max = 0;
    int min = 1001;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] > 500 && arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] < 500 && arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << ' ' << min;
    delete arr;
    return 0;
}