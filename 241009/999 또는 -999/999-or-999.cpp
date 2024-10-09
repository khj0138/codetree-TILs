#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int max = -999, min = 999;
    int* arr = new int[100];
    for (int i = 0 ; i < 100; i++)
    {
        cin >> arr[i];
        if(arr[i] == 999 || arr[i] == -999)
        {
            break;
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << max << ' ' << min;
    return 0;
}