#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int day = 31;
    if(n == 2)
    {
        day = 28;
    }
    else if (n <= 7)
    {
        if(n % 2 == 0)
        {
            day = 30;
        }
    }
    else if (n % 2 != 0)
    {
        day = 30;
    }
    cout << day;
    return 0;
}