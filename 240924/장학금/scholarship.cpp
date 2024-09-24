#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int price = 0;
    if(a >= 90)
    {
        if (b >= 95)
        {
            price = 10;
        }
        else if (b >= 90)
        {
            price = 5;
        }
    }
    cout << price * 10000;
    return 0;
}