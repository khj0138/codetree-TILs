#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a1, a2;
    cin >> a1 >> a2;
    int b1, b2;
    cin >> b1 >> b2;

    char winner = 'A';
    if (a1 == b1)
    {
        if(a2 < b2)
        {
            winner = 'B';
        }
    }
    else if (a1 < b1)
    {
        winner = 'B';
    }
    cout << winner;
    return 0;
}