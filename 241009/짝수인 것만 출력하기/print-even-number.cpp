#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int* arr = new int[n];

    int* evenArr = new int[100];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            evenArr[cnt++] = arr[i];
        }
    }
    if(n < 100)
    {
        evenArr[cnt] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if(evenArr[i] == -1)
        {
            break;
        }
        else
        {
            cout << evenArr[i] << ' ';
        }
    }
    delete arr;
    delete evenArr;

    return 0;
}