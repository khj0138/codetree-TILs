#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    int dummy = 1;
    while(n > dummy)
    {
        cnt++;
        n *= 10;
        dummy *= 10;

        n /= cnt;
    }
    cout << cnt;
    return 0;
}