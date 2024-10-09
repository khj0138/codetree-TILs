#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int* arr = new int[10];
    int cnt = 0;
    for (int i = 1; i <= 10; i++)
    {
        arr[i - 1] = n * i;
        if(n % 5 == 0 || i % 5 == 0)
        {
            cnt++;
        }
        cout << arr[i - 1] << ' ';
        if(cnt == 2)
        {
            break;
        }
    }

    return 0;
}