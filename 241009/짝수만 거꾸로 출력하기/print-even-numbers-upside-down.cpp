#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ' ' ;
        }
    }
    delete arr;
    return 0;
}