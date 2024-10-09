#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin >> N;

    int* arr = new int[N];
    int min = 1024 * 1024 * 1024 * (2) - 1;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(min > arr[i])
        {
            min = arr[i];
            cnt = 1;
        }
        else if (min == arr[i])
        {
            cnt++;
        }
    }
    cout << min << ' ' << cnt;
    delete arr;
    return 0;
}