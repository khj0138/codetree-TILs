#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int* arr = new int[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            sum += arr[i - 1];
            sum += arr[i - 2];
            sum += arr[i - 3];
            break;
        }
    }
    cout << sum;
    delete arr;
    return 0;
}