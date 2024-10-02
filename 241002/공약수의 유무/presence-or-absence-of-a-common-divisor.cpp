#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int num1 = 1920;
    int num2 = 2880;
    bool check = false;
    for (int i = a; i <= b; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            check = true;
            break;
        }
    }
    if(check)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}