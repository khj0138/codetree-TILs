#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                sum++;
                cout << sum << ' ';
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                sum += 2;
                cout << sum << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}