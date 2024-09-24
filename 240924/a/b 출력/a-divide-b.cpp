#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int c = a / b;
    cout << c << '.';
    
    for (int i = 0; i < 20; i++)
    {
        a -= c * b;
        a *= 10;
        c = a / b;
        cout << c;
    }
    return 0;
}