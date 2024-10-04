#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
            if(j == (i - 1))
            {
                cout << i << ' ';
            }
        }
    }
    return 0;
}