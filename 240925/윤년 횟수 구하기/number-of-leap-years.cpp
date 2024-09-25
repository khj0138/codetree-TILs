#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i % 4 == 0)
        {
            cnt++;
        }
    }
    for (int i = 1; i <= n / 100; i++)
    {
        if(i % 4 != 0)
        {
            cnt--;
        }
    }
    cout << cnt;
    return 0;
}