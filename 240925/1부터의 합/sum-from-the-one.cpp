#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if ((sum + i) > n)
        {
            break;
        }
        sum += i;
    }
    cout << sum;
    return 0;
}