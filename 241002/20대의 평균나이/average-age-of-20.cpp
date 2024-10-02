#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    double avr = 0;
    bool check = false;
    int cnt = 0;
    int n;
    while(!check)
    {
        cin >> n;
        if (n / 10 != 2)
        {
            check = true;
        }
        else
        {
            sum += n;
            cnt++;
        }
    }
    avr = (double)sum / (double)cnt;

    cout << fixed;
    cout.precision(2);
    cout << avr;
    return 0;
}