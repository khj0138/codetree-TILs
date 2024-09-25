#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    int sum = 0;
    double avr = 0;
    for (int i = a; i <= b; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            cnt++;
            sum += i;
        }
    }
    avr = (double)sum / (double)cnt; 
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avr;
    return 0;
}