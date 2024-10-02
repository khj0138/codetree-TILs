#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    bool check = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            check = true;
            break;
        }
    }
    if(check)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}