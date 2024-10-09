#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 0;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
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
    delete arr;
    cout << sum;
    return 0;
}