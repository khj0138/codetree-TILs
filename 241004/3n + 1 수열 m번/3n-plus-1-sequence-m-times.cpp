#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;
    int n;
    int cnt;
    for (int i = 0; i <= m; i++)
    {
        cin >> n;
        cnt = 0;
        while (n != 1)
        {
            cnt++;
            if(n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = n * 3 + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}