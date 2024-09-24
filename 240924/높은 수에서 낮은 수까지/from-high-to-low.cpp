#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    if(a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i >= b; i--)
    {
        cout << a << ' ';
    }
    return 0;
}