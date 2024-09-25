#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num;
    int cnt = 0;
    int sum = 0;
    double avr = 0;
    for (int i = 0 ; i < n; i++)
    {
        cin >> num;
        sum += num;
        cnt++;
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