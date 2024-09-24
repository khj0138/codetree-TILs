#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    int middle = a;
    if (a >= b)
    {
        if (b >= c)
        {
            middle = b;
        }
        else if (a >= c)
        {
            middle = c;
        }
    }
    cout << middle;
    return 0;
}