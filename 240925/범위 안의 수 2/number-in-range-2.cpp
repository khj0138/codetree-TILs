#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum = 0;
    int cnt = 0;
    double avr = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (n >= 0 && n <= 200)
        {
            sum += n;
            cnt++;
        }
    }
    if(cnt > 0)
    {
        avr = (double)sum / (double)cnt;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avr;
    return 0;
}